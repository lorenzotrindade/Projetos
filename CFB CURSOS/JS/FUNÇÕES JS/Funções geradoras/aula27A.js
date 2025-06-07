function* perguntas(){
    const nome =yield 'whats your name?'
    const esporte=yield 'whats your favorite sport?'
    return 'Your name is' + nome+ ', your favorite sport is' + esporte

}

const itp=perguntas()
console.log(itp.next().value)
console.log(itp.next(' Lorenzo').value)
console.log(itp.next('voleyboll').value)