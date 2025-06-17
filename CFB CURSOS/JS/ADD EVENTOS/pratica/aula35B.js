const caixa1=document.querySelector("#caixa1")
const caixa2=document.querySelector("#caixa2")
const btn=document.querySelector("#btn_transferir")

const todoscursos=[...document.querySelectorAll(".curso")]

todoscursos.map((el)=>{
el.addEventListener("click", (evt)=>{
    const curso=evt.target
    curso.classList.toggle("selecionado")
})

})

btn.addEventListener("click",(el)=>{
    const cursoSelecionados=[...document.querySelectorAll('.selecionado')]
     cursoSelecionados.map((el)=>{
        caixa2.appendChild(el)

    })

    // aqui só pego e mando para a caixa2, mas e seu euquiser devolver? como faço para saber quem volta e para quem?
    
 const cursosNaoselecionados=[...document.querySelectorAll(".curso:not(.selecionado)")]
    cursosNaoselecionados.map((el)=>{
        caixa1.appendChild(el) 

        // a mesma coisa, eu passei por todo o array, achei p que não tinha a classe

    })

})