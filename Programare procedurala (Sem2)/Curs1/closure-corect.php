<?php

//Executie: php closure-corect.php

function topfunc() {
    $me = 'Sorin';
    $middlefunc = function($var)  use ($me) {
        print ($var."\n");
        print ($me."\n");
    };
    return $middlefunc;
}

$mf = topfunc();
$mf('Ionel');
