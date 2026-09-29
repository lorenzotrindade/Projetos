using UnityEngine;

public class BotaoEmergencia : MonoBehaviour{

    [SerializeField] private int rpm;
    [SerializeField] private bool emergenciaAtivada = false;

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.E))
        {
            emergenciaAtivada = true;
            Debug.Log("[MECÂNICA] Usuário pressionou o Botão de Emergência!");
        }

        if(emergenciaAtivada && rpm > 0)
        {
            rpm = 0;
            Debug.LogWarning("[ALERTA] botão de parada parou");
        }
    }

}
// mas to na duvida, aqui estamos coolocando valores no inspector né? deveria ser o usuario a colocar esse valor do rpm
