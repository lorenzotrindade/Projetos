using UnityEngine;

public class ControladorTutorial : MonoBehaviour{

[SerializeField] private string[] instrucoes;    
[SerializeField] private GameObject[] pecasDestaque;
private int etapaAtual=0;

void Start()
    {
        mostrarEtapa();
    }
void Update() {//unsadokeydown é como dizer pressionada uma
    if(Input.GetKeyDown(KeyCode.Space)) {
        if(etapaAtual < instrucoes.Length - 1)
            {
                etapaAtual++; 
                mostrarEtapa(); 
            }
    } //unsadokeydown é como dizer pressionada uma
    if(Input.GetKeyDown(KeyCode.Backspace)){
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
        // só somando +1 passo, pra na iniciar no zero

        for(int i = 0; i < pecasDestaque.Length; i++){
            pecasDestaque[i].SetActive(i == etapaAtual );
            // aqui to dizendo o q i aceita um valor bool
            // se o i não for igual a etapa atual, nem entra no for
            
        }
    }
}