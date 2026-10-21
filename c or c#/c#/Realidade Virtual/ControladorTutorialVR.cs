using UnityEngine; 

public class ControladorTutorialVR:MonoBehaviour{
    [Tooltip("Frases de orientação")]
    [SerializeField]private string[] instrucoes;

    [SerializeField] private GameObject[]pecasDestaque; 
    
    [Header("-- configurações VR")]
    [SerializeField] private string[]tagMaoVR = new string[]{"LeftHand", "RightHand"};
    ' porque pe new sttring mesmo? se ali vai as tags das maos vr'

    [Tooltip("Tempo minimo de colisoes")]
    [SerializeField] private float tempoCoolDown=2.0f;
    [SerializeField] private int etapaAtual = 0;

    void Start(){
        mostrarEtapa();
    } 
    void Update()
{
    if (Input.GetKeydown(Keycode.space)){    
        if(EtapaAtual < instrucoes.length - 1)
            {
                etapaAtual++;
                mostrarEtapa();
            }
        }
    if(Input.GetKeydown(KeyCode.Backspace))
        if( etapaAtual > 0){
        etapaAtual--;
        mostrarEtapa();
    }
}    

    void mostrarEtapa(){
        if(pecasDestaque != null && pecasDestaque > 0)
        {
            for(int i=0; i < instrucoes.length; i++){
            if(pecasDestaque[i] != null){
                bool e_atual = (i == etapaAtual);
                'para mim o i neme sta instanciado e por isos ta errado, e pq estamos criando e_atual igula i indice, é uma variavel auxiliar q recvebe o valo?'
                pecasDestaque[i].SetActive(e_atual);
                'esse trem aqui de verufucar se esta ativo o indice correto?'

                if(e_atual){
                    criarColisor(pecasDestaque[i]);
                    'aqui ta vericando se o indice atual tem colisor, tipo se não é zerpo?'
                }
            }
            }
        }
        
    }
}