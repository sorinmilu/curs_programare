<?php

//Executie php generator.php

function Generator()
{
    echo "computer","\n";
    yield;

    echo "kompjuter","\n";
    yield;

    echo "ordinador","\n";
    yield;

    echo "urdinatore","\n";
    yield;
}

$gen = Generator();

$value = $gen->current();
$gen->next();
$gen->next();

