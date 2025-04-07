let list = [];
let register = JSON.parse(localStorage.getItem("batatinha"))

console.log(register)

if(register) {
    if(localStorage.getItem("convidados")=== null) {
        list.push(register);
        localStorage.setItem("convidados", JSON.stringify(list))
    } else {
        let l = JSON.parse(localStorage.getItem("convidados"))
        l.push(register)
        localStorage.setItem("convidados", JSON.stringify(l))
    }
}