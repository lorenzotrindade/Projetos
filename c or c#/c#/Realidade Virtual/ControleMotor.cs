using UnityEngine;

public class ControleMotor : Monobehaviour{
    [SerializeField] private int RPM = 600;
    // colocar oc oisa q segura as castanhas
    void Update(){
        if (!emergenciaAtivada ){
            objetoCastanha.transform.Rotate(0, 0, RPM * Time.deltaTime);
            // esse objeto castanha eu devo colcoar o nome exato do objeto né?
        }
        if(Input.GetKeyDown(KeyCode.A)){
        DefineRPM(600);
    };
        if(Input.GetKeyDown(KeyCode.A)){
        DefineRPM(600);
    };        
        if(Input.GetKeyDown(KeyCode.A)){
        DefineRPM(600);
    };               

}

//RPM pela maoVR

private void OntriggerEnter(Collider other){
        if (other.CompareTag("MaoVR"))
        {
            if(RPM==600)DefineRPM(800);
            else if(RPM==800) DefineRPM(1200);
            else DefineRPM(600);
        }
        
    }
     public void DefineRPM(){
        if (!emergenciaAtivada){
            RPM =novoRPM;
            Debug.Log($"[MOTOR] Rotação alterada para {RPM} RPM."); 
            
        }
    }
    
}