<?php 
function conta() {
    static $conta = 0;

    $conta++;
    // a cada vez vai somar a variavel mais ela
    echo $conta, "<br/>";
}


?>