const VALOR_PADRAO=0


function adicionar(v) {
    return valor+v
   


}

// aqui o interessante q modifica uma VAR que estão fora da chave da função
let valor =0 
valor=adicionar(10)
 console.log(valor)

 valor=adicionar(5)
 console.log(valor)
 // ou seja se o valor vai para o parametros, precisa indicar  a VARIAVEL QUE SOMA COM O PARâMETRO


function soma(n1=VALOR_PADRAO,n2=VALOR_PADRAO) {
    let res
    res=n1+n2
    return res

}


let resultado_soma=soma(5)
console.log(resultado_soma)