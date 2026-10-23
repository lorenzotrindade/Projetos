using UnityEngine; 

public class ControladorTutorial:MonoBehaviour{
    [Tooltip("Frases de orientação")]
    [SerializeField]private string[] instrucoes;

    [SerializeField] private GameObject[]pecasDestaque; 
    
    [Header("-- configurações VR")]
    [SerializeField] private string[]tagMaoVR = new string[]{"LeftHand", "RightHand"};
    /*new string[]é avisar para guardar os valores de string q sera nova e tera a tag tagMaoVR*/

    [Tooltip("Tempo minimo de colisoes")]
    [SerializeField] private float tempoCoolDown=2.0f;
    [SerializeField] private int etapaAtual = 0;

    void Start(){
        mostrarEtapa();
    }
    void Update(){
        if (Input.GetKeyDown(KeyCode.D)){
            AvancarEtapa();
        }
        if (Input.GetKeyDown(KeyCode.A)){
            VoltarEtapa();
        }
    }
    /*criar publico se tiver q chamar em outro script*/
    public void AvancarEtapa(){
        if(etapaAtual < instrucoes.Length -1){
            etapaAtual++;
            mostrarEtapa();
        }
    }
    public void VoltarEtapa(){
        if(etapaAtual > 0){
            etapaAtual--;
            mostrarEtapa();
        }
    }

    void mostrarEtapa(){
        if(pecasDestaque != null && pecasDestaque > 0)
        {
                /* Mostra apenas peça atual*/
            for(int i=0; i < instrucoes.length; i++){
            if(pecasDestaque[i] != null){
                bool e_atual;
                if( i == etapaAtual){
                    e_atual =true;
                } else{
                    e_atual=false;
                }
                //setactive escolhe apenas a verdadeira para mostrar
                pecasDestaque[i].SetActive(e_atual); 
            
                if(e_atual == true){
                    criarColisor(pecasDestaque[i]);
                    /*aqui ta vericando se o indice atual tem colisor, tipo se não é zerpo?'
               */ }
            }
            }
        }
        
    }
    void  criarColisor(GameObject peca){
        Collider colisorExistente = peca.GetComponent<Collider>();
        if(colisorExistente == nul){
            colisorExistente=peca.Addcomponent<boxCollider>();
        }
        colisorExistente.isTrigger=true;
    }
}