const caixa1=document.querySelector("#caixa1")
const btn_c1=document.querySelector("#c2")

caixa1.addEventListener("click",(evt)=>{
    console.log("clicou")
    console.log(evt)

})

btn_c1.addEventListener("click",(evt)=>{
    
    evt.stopPropagation()
})
// aqui eu falei que o evento q foi adicionado a todos, não quero q seja propagado para essa variavel aqui


