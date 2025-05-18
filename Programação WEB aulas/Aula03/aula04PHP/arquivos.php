<?php 

$handle = @fopen ("/tmp/arquivos.txt" , "r");

if($handle) {
    while (($buffer  = fgets($handle, 4096)) !== false) {
        echo $buffer;

    }

    if(!feof($handle)) {
        echo'erro';
    }
    fclose($handle);
}


?> 