function soma(...valores) {
    let res=0
//o for of percorre os ELEMENTOS DO ARRAY
// declaro V que correrá e com valor, começa o lop percorrendo eles + v
    for(let v of valores){
    res+=v
    } return res


} console.log(soma(10,5,2,8))
//logica por tras 10+1=11+5+16+2=18+8=25