calcular(); {
    var transporte1 = document.getElementById("transporte")
    var amp1 = document.getElementById('amp')
    var bebidas1 = document.getElementById('bebidas')
    var comidas1= document.getElementById('comidas')

    
      
        if ( transporte1.value.length == 0 ||amp1.value.length==0 || bebidas1.value.length ==0 ||comidas1.value.length == 0 && transporte==0 )
         { alert("Valores incorretos")
         } else {

            var transporte = Number(transporte1.value)
            var amp = Number(amp1.value)
            var bebidas1 = Number(bebidas1.value)
            var comidas1=  Number(comidas1.value)

            alert("tudo ok") 
         } 
}