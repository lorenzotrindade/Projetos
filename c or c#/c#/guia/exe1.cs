using UnityEngine;

// onceito que na unitu a gente cria variaveis privadas mas conseguimos 
//acessa-las pelo serializeField
public class exe1 : MonoBehaviour {
    // o nome da classe principal deve ser o nome do arq

    [SerializeField] private float diametroPeca;

//os metodos do ciclo de vida da unity usando letra maiscula
    void Start(){

        if(diametroPeca > 0)
        {
            //issop é formula de velocidade
            //float rpm = (3.14159 * diametroPeca * 3000) / 1000;
            
            //formula correta
            int rpm = (int)(3000.0f / diametroPeca);
            Debug.Log($"o valor do rpm é {rpm:F2}mm");
            // f sinigfica fixed-pint
            //2 sinifica quntas casa a spota a virgula
        }
        else
        {
             Debug.Log($"trouxa");
        }
    }
}

