const cursos=['HTML' , 'CSS', 'JS', 'PHP', 'REACT']
 // podemos passar quantos parametros quiser para o map, cada itereção vira os parametros 
cursos.map((el,i)=>{
    console.log('curso' + el + ' vasco -  posição do curso' + i)
})
// ou seja pega todos os parametros, separa em indice e impresa lado a lado