function soma(...valores) {

    let tam =valores.length
    let res=0

    for(let i=0;i<tam; i++){
        res+=valores[i]
    } return res


} console.log(soma(10,5,2,8))
// como operar isso?sei q valores é arry
// Percorrendo o array, como? criando um loop, mas querendo adcionar a ele, então tem q ter2 variaveis
// a que pega o tamanho do aray, a que adiciona ao tamnho do array, e a que retorna tudo