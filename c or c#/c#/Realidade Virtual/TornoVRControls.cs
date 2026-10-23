using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.XR;

namespace TornoVR
{
    /// <summary>Exploracao do torno: teleporte, giro em passos e acessorio opcional.</summary>
    public sealed class TornoVRControls : MonoBehaviour
    {
        public InputActionAsset actions;
        public Transform cameraOffset;
        public Camera head;
        public Transform rightHand;
        public GameObject leftHandVisual;
        public GameObject rightHandVisual;
        public GameObject luneta;
        public GameObject references;
        public Collider floor;
        public LineRenderer pointer;
        public float snapDegrees = 30f;
        public float standingHeight = 1.65f;
        public float playerRadius = .22f;

        readonly List<XRInputSubsystem> inputs = new List<XRInputSubsystem>();
        readonly List<XRDisplaySubsystem> displays = new List<XRDisplaySubsystem>();
        InputAction teleport, turn, toggleLuneta, toggleReferences, rightTracking, leftTracking;
        bool turnReady = true;
        bool originConfigured;
        bool xrRunning;
        float nextTeleport;
        float pitch;

        void Awake()
        {
            teleport = actions.FindAction("Right/Teleport", true);
            turn = actions.FindAction("Right/Turn", true);
            toggleLuneta = actions.FindAction("Right/ToggleLuneta", true);
            toggleReferences = actions.FindAction("Left/ToggleReferences", true);
            rightTracking = actions.FindAction("Right/TrackingState", true);
            leftTracking = actions.FindAction("Left/TrackingState", true);
        }

        void OnEnable() => actions.Enable();
        void OnDisable() => actions.Disable();

        void Update()
        {
            SubsystemManager.GetSubsystems(displays);
            xrRunning = displays.Exists(d => d.running);
            if (xrRunning)
            {
                ConfigureOrigin();
                bool rightTracked = rightTracking.ReadValue<int>() == 3;
                bool leftTracked = leftTracking.ReadValue<int>() == 3;
                rightHandVisual.SetActive(rightTracked);
                leftHandVisual.SetActive(leftTracked);
                if (toggleLuneta.WasPressedThisFrame()) ToggleLuneta();
                if (toggleReferences.WasPressedThisFrame()) references.SetActive(!references.activeSelf);
                float x = turn.ReadValue<Vector2>().x;
                if (Mathf.Abs(x) < .25f) turnReady = true;
                if (Mathf.Abs(x) > .7f && turnReady)
                {
                    transform.RotateAround(head.transform.position, Vector3.up, Mathf.Sign(x) * snapDegrees);
                    turnReady = false;
                }
                UpdatePointer(rightTracked);
            }
            else
            {
                originConfigured = false;
                leftHandVisual.SetActive(false);
                rightHandVisual.SetActive(false);
                pointer.enabled = false;
                DesktopPreview();
            }
        }

        void ConfigureOrigin()
        {
            if (originConfigured) return;
            SubsystemManager.GetSubsystems(inputs);
            foreach (var subsystem in inputs)
            {
                if (!subsystem.running) continue;
                if (subsystem.TrySetTrackingOriginMode(TrackingOriginModeFlags.Floor))
                    cameraOffset.localPosition = Vector3.zero;
                else
                {
                    subsystem.TrySetTrackingOriginMode(TrackingOriginModeFlags.Device);
                    cameraOffset.localPosition = Vector3.up * standingHeight;
                }
                originConfigured = true;
                break;
            }
        }

        void UpdatePointer(bool tracked)
        {
            pointer.enabled = tracked;
            if (!tracked) return;
            Ray ray = new Ray(rightHand.position, rightHand.forward);
            bool hit = Physics.Raycast(ray, out var info, 9f, ~0, QueryTriggerInteraction.Ignore);
            bool allowed = hit && info.collider == floor && info.normal.y > .8f && ClearAt(info.point);
            pointer.SetPosition(0, ray.origin);
            pointer.SetPosition(1, hit ? info.point : ray.GetPoint(9f));
            pointer.startColor = pointer.endColor = allowed ? new Color(.15f,.9f,.6f) : new Color(.9f,.35f,.2f);
            if (allowed && teleport.WasPressedThisFrame() && Time.unscaledTime >= nextTeleport)
            {
                Vector3 headOffset = head.transform.position - transform.position;
                headOffset.y = 0;
                transform.position = info.point - headOffset;
                nextTeleport = Time.unscaledTime + .3f;
            }
        }

        bool ClearAt(Vector3 foot)
        {
            // Sala de 8 x 7 m: nao permite teleporte para fora pela abertura da porta.
            if (Mathf.Abs(foot.x) > 3.7f || Mathf.Abs(foot.z) > 3.2f) return false;
            Vector3 lower = foot + Vector3.up * (playerRadius + .035f);
            Vector3 upper = foot + Vector3.up * Mathf.Max(1.3f, head.transform.position.y - playerRadius);
            return !Physics.CheckCapsule(lower, upper, playerRadius, ~0, QueryTriggerInteraction.Ignore);
        }

        public void ToggleLuneta() => luneta.SetActive(!luneta.activeSelf);

        void DesktopPreview()
        {
            cameraOffset.localPosition = Vector3.zero;
            var keyboard = Keyboard.current;
            var mouse = Mouse.current;
            if (keyboard == null) return;
            if (keyboard.lKey.wasPressedThisFrame) ToggleLuneta();
            if (keyboard.rKey.wasPressedThisFrame) references.SetActive(!references.activeSelf);
            if (mouse != null && mouse.rightButton.isPressed)
            {
                Vector2 delta = mouse.delta.ReadValue() * .12f;
                transform.Rotate(0, delta.x, 0);
                pitch = Mathf.Clamp(pitch - delta.y, -75, 75);
                head.transform.localRotation = Quaternion.Euler(pitch, 0, 0);
            }
            Vector3 movement = Vector3.zero;
            if (keyboard.wKey.isPressed) movement += transform.forward;
            if (keyboard.sKey.isPressed) movement -= transform.forward;
            if (keyboard.aKey.isPressed) movement -= transform.right;
            if (keyboard.dKey.isPressed) movement += transform.right;
            Vector3 candidate = transform.position + movement.normalized * Time.deltaTime * 1.6f;
            if (movement.sqrMagnitude > 0 && ClearAt(candidate)) transform.position = candidate;
        }

        void OnGUI()
        {
            if (xrRunning) return;
            GUI.Box(new Rect(15,15,520,60), "TORNO VR | WASD: mover | Botao direito do mouse: olhar\nL: luneta opcional | R: referencias");
        }
    }
}
