<?php

//Executie php generator1.php

function Generator()
{
    yield "computer";
    echo "dupa primul yield\n";
    yield "kompjuter";
    echo "dupa al doilea yield\n";
    yield "ordinador";
    echo "dupa al treilea yield\n";
    yield "urdinatore";
    echo "dupa al patrulea yield\n";
}

$gen = Generator();

$value = $gen->current();
print $value."\n";
$gen->next();
$value = $gen->current();
print $value."\n";
$gen->next();
$value = $gen->current();
print $value."\n";

