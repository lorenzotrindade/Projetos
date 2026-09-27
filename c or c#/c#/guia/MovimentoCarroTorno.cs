using UnityEngine;

public class MovimentoCarroTorno : MonoBehaviour{
    [SerializeField] private float vel_Avanco = 2.0f;
    // é uma boa pratica declarar a variavel com um valor para se mover e depois o user altera
    void Update()
    {
        // precisamos receber o que o usuario faz em uma variavel
        
        float entradaT = Input.GetAxis("Vertical");
        //GetAxis server para pegar as setas na vertida, do teclado e do mousa da realidade virtual

        // time delta time é quadros por segundo
        float deslocamento = entradaT * vel_Avanco * Time.deltaTime;
        
        // temos o movumento, agora a gente coloca no eixo correto
        transform.Translate(0,0 , deslocamento);
    }
    
}

// seria isso acima? to notando q seria q a gente ta sempre declarando nbo serialize um valor padrão
// outra coisa q ando notando é que o que o usuario digita to colocando como variavel local
