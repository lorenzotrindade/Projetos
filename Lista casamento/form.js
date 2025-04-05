const submit = document.querySelector("[buttom]")
const input = document.querySelectorAll("[input]")
const inputBestman  = document.querySelector("#optional-best-man")


submit.addEventListener('click', (e)=>{

   var family, people, names, paying, bestman;

   if(inputBestman.value != 'Selecione uma opção') {

    bestman = inputBestman.value;

   } else {alert('selecione uma opção')}


   e.preventDefault()
})

