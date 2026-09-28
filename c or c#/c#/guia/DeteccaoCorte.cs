using UnityEngine;

public class DeteccaoCorte : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        //tem a tag q preciso?
        if (other.CompareTag("pecaObrigatoria"))
        {
            Debug.Log("[CORTE DETECTADO] A ferramenta encostou na peça do torno!");

            ControladorTutorial maestro = FindObjectOfType<ControladorTutorial>();
        }
    }
}           