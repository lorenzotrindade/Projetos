// É uma função de seta (=>) que recebe um número indefinido de argumentos (...valores).
// O operador ... (rest operator) agrupa os argumentos passados em um array chamado valores.

const soma=(...valores)=>{
    const somar=val=>{
        let res=0
        for(v of val) {
            res+=v
            return res

        }
    }

    
    return somar(valores)
} 

console.log(soma(10,5,15))