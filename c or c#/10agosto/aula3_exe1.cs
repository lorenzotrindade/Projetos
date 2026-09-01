using UnityEngine;

public class amostragem:MonoBehaviour{
    private int v1=0;
    private int v2=0;
    private int amostragem=0; 
    
    void Start()
    {

    }
    void Update()
    {

        amostragem_valor();
    }

    void amostragem_valor()
    {
        if(Input.GetKey(KeyCode.RightArrow))
        {
            v1 +=1*Time.DeltaTime ;

        }
        if(Input.GetKey(KeyCode.LeftArrow))
        {
            v2 +=1*Time.DeltaTime;

        }
        if(Input.GetKey(GetKey.DownArrow))
        {
            amostragem +=1*Time.DeltaTime;
        }
        /* foi isso que imagei.. pois ai faço meu user colcoar o numero para amostragem
         o total
         e no down arroz eu mostro a amostragem com base nos 2 valores acima..
         mas creio que tinha q ter feito uma oputra funçãoq ue soamava elas duas não seria?
        */    
    }
}