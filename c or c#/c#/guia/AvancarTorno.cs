using UnityEngine;

public class AvancarTorno:MonoBehaviour {
// ta entendi aqui q fizemos a classe apra chamar ela nos outros scripts
private void OnTriggerEnter(collider Other);
// aqui é basicamente sempre verificar se houve colisão  

void Start(){
    if (other.CompareTag("Ferramenta"))
    // compramos se tem a tag ferramenta.. coia não foi declarada tbm aonde veio esse ferramente?
    {
        ControladorTutorial maestro = FindObjectOfType<ControladorTutorial>();
        // voltamos aqui eu não tenho num um maestro  esse buscar no controladir tuturial entre conchetes não deveria ter algo?
        // maestro.AvancarEtapa() daonde surgiu isso. nem tenho 
        maestro.AvancarEtapa();
    }
    

    // aleém de tudo esse codigo ta aprecido com a minha classe 
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
}
}