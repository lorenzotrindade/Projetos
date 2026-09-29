using UnityEngine;

// Verifica se quem escostou foi a MaoVR
public class AvancarTorno:MonoBehaviour {
private void OnTriggerEnter(Collider other)
{
    if (other.CompareTag("MaoVR")){
    ControladorTutorial maestro = FindObjectOfType<ControladorTutorial>();
    
        // se não está vazio executa o avancaretapa q tem dentro ControladorTutorial    
        if(maestro != null) {
             maestro.AvancarEtapa();
            }

        }
    }
}    