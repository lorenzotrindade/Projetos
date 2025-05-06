const f_texto=document.querySelector("#f_texto")
const p_texto=document.querySelector("#p_texto")
const btn_texto=document.querySelector("#btn_texto")

btn_texto.addEventListener("click", (evt)=> {

})

let num=10
let curso = "Javascript"
// chama da pagina, no local storage, pagina, coloca o metodo, e digo quem é ela e o valor acrescido
window.localStorage.setItem("numero", num)
// entregamos ao web, o valorde num, a chave numero

// quero atualizar o numero AggregateError

localStorage.setItem('numero', 33)

// agora vamos mostrar na tela o valor
alert(localStorage.getItem('numero'))  
 /*mas olha retornou copmo string*/ 

 window.localStorage.setItem("canal","CFB cursos" )
 window.localStorage.setItem("nome", 'Bruno')
 window.localStorage.setItem("curso", curso)


 alert(localStorage.getItem('nome'))  
 alert(localStorage.getItem('canal'))  
 alert(localStorage.getItem('curso'))

 // aqui to pedingo para o treco me reportianr O NOME da chave, o index dela
 alert(localStorage.key(0))
 
 // aqui quero que ele me traga o valor que imprimiu na chave ao iniciar a pagina:
 alert(localStorage.getItem(localStorage.key(0)))