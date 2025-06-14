 const c1=document.querySelector("#c1")

//  const msg=()=>{
//     alert('clicou')
//  }

c1.addEventListener("click",(evt)=>{
    console.log(evt.target)

})

// quando usei o addevent + click, disse que é um evento de click, que dispara a funcção evt, que imprimira o evt.target que target me trará desse evento o elemento que o disparou