let el=document.getElementsByTagName('div')
// já pegou

el=[...el]
// pegou os elementos e coloco numa let
// agora abaixo a gente lÊ esses elementos
el.map((e,i)=>{
    
// agora vamos modificar essa impressão

e.innerHTML="lorenzo"

})