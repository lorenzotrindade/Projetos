// ADICIONAR uma nova classe ao documento HTML usando JS


const cursosTodos=[...document.getElementsByClassName("curso")]
const cursosTodosC1=[...document.getElementsByClassName("c1")]
const cursosTodosC2=[...document.getElementsByClassName("c2")]

console.log(cursosTodos)
console.log(cursosTodosC1)
console.log(cursosTodosC2)

cursosTodos.map((el)=>{
    el.classList.add("destaque")
    // EL DE ELEEMENTO, CLASSLIST, ADD(CLASSE)

})