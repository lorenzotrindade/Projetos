function calcular(){
    var transporte1 = document.getElementById('transporte')
    var amp1 = document.getElementById('amp')
    var bebidas1 = document.getElementById('bebidas')
    var comidas1= document.getElementById('comidas')
    var resultado = document.getElementById('resultado')
      
        if (  !transporte1.value || !amp1.value ||  !bebidas1.value ||  !comidas1.value )
         { alert("Campos não preenchidos")
            
         } else{
            var transporte = Number(transporte1.value)
            var amp = Number(amp1.value)
            var bebidas = Number(bebidas1.value)
            var comidas=  Number(comidas1.value)
            var res = Number(resultado.value)

            
            if (isNaN(transporte) || isNaN(amp) || isNaN(bebidas) || isNaN(comidas)){
           
            if ( 
               transporte < 0 || transporte > 100 ||
               amp < 0 ||amp > 100 ||
               bebidas <0 || bebidas >100 ||
               comidas <0||comidas > 100
            ) {
               let total = transporte + amp + bebidas +comidas;
               res.innerHTML += `Foi gasto na noite ${total}`
            } else {alert("deu erro")}
         } 
}
}