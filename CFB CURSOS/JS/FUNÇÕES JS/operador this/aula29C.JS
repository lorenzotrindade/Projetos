function aluno(nome,nota) {
     this.nome=nome
     this.nota=nota

      this.dados_anonimo=function(){
        setTimeout(function(){ 
            console.log(this.nome)
            console.log(this.nota)
            ,1000 
        }
        )
       

     }

     this.dados_arrow=function(){
        // abaixo foi criado uma fnção set anonima que reconhece os dados lá de cima
        setTimeout(()=>{
            console.log(this.nome)
            console.log(this.nota)
            ,1000 
        })
       

     }
 } 
 
 const all=new aluno('bruno',100)
 all.dados_anonimo()
  all.dados_arrow()


  // tá, explica pq a função anonima normal não funcionou malç e arrow function anonima sim e depois explica a teoria de cada tiupo de função e linha a lionha tbm