using UnityEngine;

public class ControladorTutorial : MonoBehaviour{

[SerializeField] private string[] instrucoes;    
[SerializeField] private GameObject[] pecasDestaque;
private int etapaAtual=0;

void Start()
    {
        mostrarEtapa();
    }
void Update() {
    if(Input.GetKey(KeyCode.Space)) {
        if(etapaAtual < instrucoes.Length - 1)
            {
                etapaAtual++; 
                mostrarEtapa(); 
            }
    } 
    if(Input.GetKey(KeyCode.Backspace)){
        // o importante q seja um valor positivo do array
        if(etapaAtual > 0)
            {
                 etapaAtual--;
                 mostrarEtapa(); 
            }
        }    
          
    }
    private void mostrarEtapa(){
        Debug.Log($"[PASSO {etapaAtual +1}: {instrucoes[etapaAtual]}]");
        // esse debug não entendi.. ele vai substituir e pq o +1?
        for(int i = 0; i < pecasDestaque.Length; i++){
            pecasDestaque[i].SetActive(instrucoes == etapaAtual );
            
        }
    }
}