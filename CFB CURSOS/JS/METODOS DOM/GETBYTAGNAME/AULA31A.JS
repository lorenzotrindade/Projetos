const dc1 =document.getElementById("c1")
const dc2=document.getElementById('c2')
const dc3=document.getElementById('c3')
const dc4=document.getElementById('c4')
const dc5=document.getElementById('c5')
const dc6=document.getElementById('c6')

const arrayElementos=[dc1,dc2,dc3,dc4,dc5,dc6] // AQUI TRAZ UM ARRAY

// const colecao=document.getElementsByTagName('div') 
// // AQUI ELE TRAZ UM HTML COLECTON
// //MAS SE EU QUISER POSSO TRANSFORMAR EM ARRAY


const colecao=[...document.getElementsByTagName('div')] 
// USEI O SCRASH PARA ESPALHAR POIS ELE SÓ FUNCIONA EM ARRAY

console.log(colecao)


colecao.map((e)=>{
    console.log(e)
})
