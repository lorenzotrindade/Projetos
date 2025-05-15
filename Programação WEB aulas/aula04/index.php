<?php
$idade ='18';
?>

<?php
print"<p>impressão de multiplas linhas.</p>";

?>

<!-- funções de users -->
funções definida pelo usuário podem ser construídas respéitando a seguinte sintaxe:

<?php 
function foo ($val1,$val2) {

    echo "exemplo de coonstrução de função \n";
    return  $val1;
} 

?>

<?php 
function exibir($nome) {

    echo "olá \n";
    echo "$nome";

    // estou mostrando esses 2
} 

exibir ("leonardo rocha");
// aqui estou chamando a função

?>