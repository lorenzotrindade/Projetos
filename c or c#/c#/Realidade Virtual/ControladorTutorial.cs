using UnityEngine;

public class ControladorTutorial : MonoBehaviour{

[SerializeField] private string[] instrucoes;    
[SerializeField] private GameObject[] pecasDestaque;
private int etapaAtual=0;

void Start()
    {
        mostrarEtapa();
    }
void Update() { //getkeydown ele é  "pressionado uma vez"
    if(Input.GetKeyDown(KeyCode.Space)) {     
                AvancarEtapa();     
    } 
    if(Input.GetKeyDown(KeyCode.Backspace)){
                voltarEtapa(); 
            }
        }    
    private void mostrarEtapa(){
        Debug.Log($"[PASSO {etapaAtual +1}: {instrucoes[etapaAtual]}]");
        // só somando +1 passo, pra na iniciar no zero

        for(int i = 0; i < pecasDestaque.Length; i++){
            pecasDestaque[i].SetActive(i == etapaAtual );
            /* vai passar por tudo de pecasDestaque, 
            mas ignora se não for verdadeiro, essa a 
            função
            essa é a função do SetActive
            */
            
        }
    }

    public void AvancarEtapa(){
        if(etapaAtual < instrucoes.length - 1)
        {
            etapaAtual++;
            mostrarEtapa();
        } else {
            Debug.Log("[TUTORIAL] você já chegou ao final do tutorial do torno!");
        }
    }
    public void voltarEtapa(){
        if(etapaAtual > 0)
        {
            etapaAtual--;
            mostrarEtapa();
        } else {
            Debug.Log("[TUTORIAL] você já chegou ao inicio do tutorial do torno!");
        }
        
    }

}