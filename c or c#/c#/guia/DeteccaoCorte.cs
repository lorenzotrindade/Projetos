using UnityEngine;

public class DeteccaoCorte : MonoBehaviour{
    [SerializeField] private string[] instrucoes;
    [SerializeField] private GameObject[pecaObrigatoria] pecasDestaque;
    //coloque o pecaObrigatoria, como algumento alidentro, mas talvez fosse o I==pecaobrigatoria

    int etapaAtual = 0;
    void Update(){
        if(etapaAtual < instrucoes.Length - 1){
            etapaAtual ++;
            mostrarEtapa();
            // aqui eu fiquei confuso.. se devia entrar no mostra etapa e comparar se o I dessa etapa é valido ou não
            // no caso verdadeiro ou falso

            if(etapaAtual.OnTriggerEnter(collider.other) == pecasDestaque.CompareceTag("pecaObrigatoria")){
                FindObjectOfType<ControladorTutorial>(pecasDestaque[i].avancarTutorial());
            }
            // cara eu fiz sozinho todo esse codigo, mas não seu se fiz certp e esse metodo "avancarTutorial" eu não tebho esse script dele.. me corriga tudo e m,e ajuda o passo a passo.. nesse codigo nem a estrtura eu olhei
            
        }
        if(etapaAtual > 0){
            if(etapaAtual.OnTriggerEnter(collider.other))
            etapaAtual --;
            mostrarEtapa();
        }
        //agora olhando melhor esses 2 ifs aqui.. parece q to pegando nas extremidades sempre
        // chat, esse 2 ifs tenho como fazer num if só? usando &&, e como ficaria a questão do incremento e decremento?
    }
    void mostrarEtapa(){
        for( int i=0; i<instrucoes.Length;i++){
        pecasDestaque[i].SetActive[i==etapaAtual];
        }
    }
}