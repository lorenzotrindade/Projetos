const cursos=[...document.querySelectorAll('.curso')]

cursos.map((el)=>{
    el.addEventListener("click",(evt)=>{
        const el=evt.target
        el.classList.add("destaque")
    })

})

// map ele percorre array, nesse caso o elemento dele,
// esse map tem uma arrowfunction que leva aos elementos um eveneto do tipoclick
// sobre esse evento (evt), receve o parametro do retorno evt de uma arrow function dele que
// cria uma constante  el, que recebe evt.target, percorrendo os elementos do array e pegando quem o chama
// esse cara que chama, esse elemento recebe um estilo chamado '' destaqie''
