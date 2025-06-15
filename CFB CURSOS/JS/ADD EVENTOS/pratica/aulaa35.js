const caixa1=document.querySelector("#caixa1")
const caixa2=document.querySelector("#caixa2")
const btn=document.querySelector("#btn_copiar")
//PEGANDO OS ELEMENTOS DA PAGINA

const todoscursos=[...document.querySelectorAll(".curso")]
// pegando os elementos das div, e usando para adicionar eventos

//add.event lisitner, colocando o evento de click a cada el, e usando o map para eprcorrer o array que fizemos apartirdo spraw


todoscursos.map((el)=>{
el.addEventListener("click", (evt)=>{
    const curso=evt.target
    //acho o elemento que trouxe o que selecionamos, usando o targ e foi entre a var curso
    curso.classList.toggle("selecionado")
    // agora a pergunta, ele tem o elemento  a classe selecionado?sim ok, não add
})

})

btn.addEventListener("click",(el)=>{
    const cursoSelecionados=[...document.querySelectorAll('.selecionado')]
    cursoSelecionados.map((el)=>{
        caixa2.appendChild(el)

    })


})