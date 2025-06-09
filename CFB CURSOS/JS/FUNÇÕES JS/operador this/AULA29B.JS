function aluno(nome,nota) {
     this.nome=nome
     this.nota=nota
//por conta do setTimeout, a classe não achou e ese parametroa acima, ou seja op que vem antes dele

     // exemplo de usar o ''hits'' em fuinções normais e criadoras
     this.dados_anonimo=function(){
        setTimeout(function(){
            console.log(this.nome)
            console.log(this.nota)
            ,1000 //aqui to atrasando a execução da função em 1s
        })
        // gera atrasso na função

     }
 } 
 
 const all=new aluno('bruno',100)
 all.dados_anonimo()
