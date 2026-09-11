using UnityEngine;
using TMpro; // biblioteca para interface de textos

public class razaoUI : MonoBehaviour{
    [SerializeField] TMP_InputField v1;
    [SerializeField] TMP_InputField r;

    void executar()
    {
        // conversão a inteiros.. 
        // a tela de interface não endente numeros, tudo é strings
        int v1 =int.Parse(Inputv1.text);
        int r =int.Parse(Inputr.text);
                
        // não tenho como declarar private.. elas são obrigatoriamente publicas para essa metodo
        // depois deixam de existir
        int valor=0;
        int c =9;
        for( ; c>=0; c--)
        {
            v1+=r;
            valor = v1;
            Debug.Log($"o proximo valor da serie será: {valor}");
        }
    }
}