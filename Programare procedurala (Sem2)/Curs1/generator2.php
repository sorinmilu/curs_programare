<?php

//Executie php generator2.php

$mygen = function()
{
    yield "computer";
    echo "dupa primul yield\n";
    yield "kompjuter";
    echo "dupa al doilea yield\n";
    yield "ordinador";
    echo "dupa al treilea yield\n";
    yield "urdinatore";
    echo "dupa al patrulea yield\n";
};

$gen = $mygen();

$value = $gen->current();
print $value."\n";
$gen->next();
$value = $gen->current();
print $value."\n";
$gen->next();
$value = $gen->current();
print $value."\n";

