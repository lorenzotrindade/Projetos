using UnityEngine;

public class exeRetangulo : MonoBehaviour;

// usamos []
// além que o serialize pede ao usae dar um valor de numero inteiro
//usando destaforma o seralizefield com o private.. nos dizemos que as outras pastas na acessam esssas variaveis
[SerializeField] private int a;
[SeriaLizeField] private int p;


// start sempre com S maiusculo

void Start () 
{
    calc_area();
    calc_perimetro();
}
calc_area()
{
    a= l*a;
    Debug.LogWarning($"a area é {a}");
}
calc_perimetro();
{
   perimetro = 2 * (l + a); 
   Debug.Log($"Perímetro do Retângulo: {perimetro}");
}


