<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    

<?php include('header.php'); ?>

    <title>Descubra seu Signo</title>
    <!-- <style>
        body {
            display: flex;
            flex-direction: column;
            align-items: center;
            justify-content: center;
            height: 100vh;
            background-color: #f4f4f4;
            font-family: Arial, sans-serif;
        }
        form {
            background-color: white;
            padding: 20px;
            border-radius: 5px;
            box-shadow: 0px 0px 10px gray;
            text-align: center;
        }
        input {
            margin: 10px;
            padding: 5px;
        }
        #res {
            margin-top: 20px;
            font-size: 20px;
            font-weight: bold;
            color: #333;
        }
    </style> -->
</head>
<body>
    
</body>
</html>

<h1>Descubra seu signo</h1>

<form id="signo-form" method="POST" action="show_zodiac_sign.php">
  <div class="mb-3">
    <label for="data_nascimento" class="form-label">Data de Nascimento:</label>
    <input type="date" name="data_nascimento" id="data_nascimento" class="form-control" required>
  </div>
  <button type="submit" class="btn btn-primary">Ver meu signo</button>
</form>

<?php
function getSigno($dia, $mes) {
   
    $xml = simplexml_load_file('signos.xml');

   
    foreach ($xml->signo as $signo) {
        $inicio = explode("-", $signo->inicio);
        $fim = explode("-", $signo->fim);

        
        $diaInicio = (int)$inicio[0];
        $mesInicio = (int)$inicio[1];
        $diaFim = (int)$fim[0];
        $mesFim = (int)$fim[1];

        
        if (($mes == $mesInicio && $dia >= $diaInicio) || ($mes == $mesFim && $dia <= $diaFim)) {
            return (string)$signo['nome'];
        }
    }

    return "Data inválida!";
}

?>


</body>
</html>
