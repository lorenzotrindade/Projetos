let anoN = document.getElementById("ano_de_nascimento");
const anoAtual = new Date().getFullYear();
let res = document.getElementById("res")

function calcularidade () {
     if (anoAtual.value == 0 || anoN.value ==0){
        alert('escreve tudo dnv')
     } else {
       let ANOA= Number(anoAtual.value);
       let ANON= Number(anoN.value); 

       res.innerHTML= ANON-ANOA 
     }
}
