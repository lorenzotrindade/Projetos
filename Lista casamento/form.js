const submit = document.querySelector("[buttom]")
const input = document.querySelectorAll("[input]")
const inputBestman  = document.querySelector("#optional-best-man")


submit.addEventListener('click', (e)=>{

   // essa parte gostaria de uma boa explicação

   var family, people, names, paying, bestman;

   if(inputBestman.value != 'Selecione uma opção') {

    bestman = inputBestman.value;

    // como tratamos ele?

    input.forEach(ipt => {
       if (ipt.value !=" " || null ||NaN )
         {
            switch(ipt.id) {
            case "input-family":
               family = ipt.value;

            case "input-people":
               people = ipt.value;

            case "input-names":
               names = ipt.value;

            case "input-paying":
               paying = ipt.value;

               break;
            }
            } else {
             
               alert(`o campo ${ipt.name} não foi preenchido`)
               return;

            }
           // essa parte gostaria de uma boa explicação 
    })

   } else {alert('selecione uma opção')
      return;
   }

   let obj= {
      family, people, names, paying,  bestman

      // essa parte gostaria de uma boa explicação
   }

   e.preventDefault()
})

