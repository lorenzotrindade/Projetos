function copiar(){
    const array_div = [...document.querySelectorAll('.cursoc1')];
    const resultado = document.getElementById('Resultado');
    resultado.innerHTML = array_div.map(el => el.innerHTML).join('');
}
copiar();