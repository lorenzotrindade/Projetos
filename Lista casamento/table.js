let list = [];
let register = JSON.parse(localStorage.getItem("batatinha"))
// variavel register, vai conter o Json do localstorage, converti para obj e disse pega ele(indiquei para aode está(e disse o nomme dele))

console.log(register)

if (register) {
    if (localStorage.getItem("convidados") === null) {
        list.push(register);
        localStorage.setItem("convidados", JSON.stringify(list))
        // se não existe a chave convidados === nul vazio, list push, adiciona convidados a registerm agora poega ele e transforma um uma string objeto e colcoa na list
    } else {
        let l = JSON.parse(localStorage.getItem("convidados"));
        l.push(register);
        localStorage.setItem("convidados", JSON.stringify(l));
        // empurramos a já existente para register e depois mandamos pro logalk storage como stringify
    }
}

function init() {
    let l = JSON.parse(localStorage.getItem("convidados"))
    // o que fazemos aqui e porque?

    if(!l) 
        return;
        // senão l, true? então acaba a function 

        let all= 0;
        let allPaying=  0;
        
        var table = document.querySelector("table")
        var body = document.createElement("tbody")
        let total = document.querySelector("#count")
        let totalpaying = document.querySelector("#paying")
        
        for(let i =0; i< l.length;i++) 
            //resumindo, enquanto i. seu tamanho fo menor que l, i vai acrescer

        {
            // enquantofor true a coindição for, ocorre issoi aqui:
        let tr = document.createElement("tr")          
        let id = document.createElement("td")
        let family = document.createElement("td")
        let names = document.createElement("td")
        let people = document.createElement("td")
        let paying = document.createElement("td")
        let edit = document.createElement("td")   
        let div = document.createElement("div")
        let span= document.createElement("span")

        edit.className = 'edit';
        id.innerHTML = i + 1;
        family.innerHTML=`${l[i].family}`
        names.innerHTML=`${l[i].names}`
        people.innerHTML=`${l[i].people}`
        paying.innerHTML=`${l[i].paying}`
        family.innerHTML=`${l[i].family}`
       span.innerHTML = 'editar'

       // quero me explique pq fiz essas liha aqui e a logica por tras delas
        } 
}