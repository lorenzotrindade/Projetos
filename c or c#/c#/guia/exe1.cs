using UnityEngine;

// onceito que na unitu a gente cria variaveis privadas mas conseguimos 
//acessa-las pelo serializeField
public class exe1 : MonoBehaviour {

    [SerializeField] private float diametroPeca;

    void start(){
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

