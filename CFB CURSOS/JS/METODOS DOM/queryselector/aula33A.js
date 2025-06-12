const divTodas=[...document.getElementByTagName('div')]
const cursosTodos=[...document.getElementsByClassName("curso")]
const cursosC1=[...document.getElementsByClassName("c1")]
const cursosC2=[...document.getElementsByClassName("c2")]
const cursoespecial=[...document.getElementsByClassName('curso')][6]

const query_divTodas=[...document.querySelectorAll('div')]
// é um array usando sprash e ainda usando o div para localizar os elementos

console.log('query_divTodas')
//aqui me retornara uma coleção com todas as div, uma nodeList

const query_cursoTodos=[...document.querySelectorAll('.curso')]
// agora vamos usar esse query para achar apenas as classe com esse nome

console.log(query_cursoTodos)

const query_cursoespecial=document.querySelectorAll("#c1")[0]
// sigifnicai que estou pegando o elemento com o IDC1 da posição 0, iy seha se usa isso caso tenha mais elementos com o mesmo id