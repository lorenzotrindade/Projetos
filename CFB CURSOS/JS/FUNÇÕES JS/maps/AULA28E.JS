const converterInt=(e)=>parseInt(e)
// ela recebe o paramatreo e que transforma em int e volta paraele (e)
let num=['1', '2', '3', '4', '5'].map(converterInt)
console.log(num)

// primeiro declarecei o array q recebe valores, dai digo os elementos dele devem ser convertido para int
// DEPOIS IMPRIMO O ARRAY