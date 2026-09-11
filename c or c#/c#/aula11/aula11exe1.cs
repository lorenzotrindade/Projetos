using UnityEngine;

// denovo lembrando que o nome da classe deveria ser o nome do arquivo.. mas como funciona deixamos
// estamos apenas aprendendo
public class razao:MonoBehaviour {
    [SerializeField] private int valor;
    [SerializeField] private int r;
    

void Start()
    {
        for(int c = 9; c >= 0;c--){
        valor+=r;
        Debug.Log($"o priximo valor da serie é {valor}");
    } 
    }
void Update()
    {
        
    }
    
    
}
