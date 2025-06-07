// uma função geradora ela tem seu retorno  adiado até quando precisamos dele


function* cores(){
yield "verde"
yield "azul"
yield "amarelo"    

}

const itc=cores()
console.log(itc.next().value)
//na proxima vez q ela vier, quero dela o valor

console.log(itc.next().value)