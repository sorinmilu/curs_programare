<?php

//executie: php vehicule_regexp.php

$text = ' Lulu conduce bicicleta si masina; Judith conduce trotineta si vapor; Aladin conduce trotineta role si bicicleta; Heidi conduce avion role si bicicleta.';

$pattern = '/([A-Z]\w+)\sconduce.*?bicicleta.*?(;|\.)/';
$replacement = '$1';

$result =  preg_replace($pattern, $replacement, $text);
echo "\nCine conduce bicicleta\n";
echo $result ."\n";

