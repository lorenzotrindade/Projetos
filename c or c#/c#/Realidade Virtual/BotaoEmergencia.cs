using UnityEngine;

public class BotaoEmergencia : MonoBehaviour{

    [SerializeField] private int rpm = DefineRPM();
    // um rpm padrão, depois o user altera
    [SerializeField] private bool emergenciaAtivada = false;

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.E))
        {
            AcionarEmergencia();
        }
    }
    void AcionarEmergencia(){
        emergenciaAtivada = true;
        rpm=0;
        Debug.LogWarning("[ALERTA] botão de parada parou");
    
    }
}