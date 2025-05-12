<?php
function getSigno($dia, $mes) {
    // Carregar o XML
    $xml = simplexml_load_file('signos.xml');

    // Percorrer os signos
    foreach ($xml->signo as $signo) {
        $inicio = explode("-", $signo->inicio);
        $fim = explode("-", $signo->fim);

        // Converter os valores para números inteiros
        $diaInicio = (int)$inicio[0];
        $mesInicio = (int)$inicio[1];
        $diaFim = (int)$fim[0];
        $mesFim = (int)$fim[1];

        // Verificar se a data está dentro do intervalo
        if (($mes == $mesInicio && $dia >= $diaInicio) || ($mes == $mesFim && $dia <= $diaFim)) {
            return (string)$signo['nome'];
        }
    }

    return "Data inválida!";
}

// Exemplo de uso
$dia = 15; // Dia de nascimento
$mes = 4;  // Mês de nascimento
echo "Seu signo é: " . getSigno($dia, $mes);
?>