<?php

//Executie: php closure-error.php

function topfunc() {
    $me = 'Sorin';
    $middlefunc = function($var) {
        print ($var."\n");
        print ($me."\n");
    };
    return $middlefunc;
}

$mf = topfunc();
$mf('Ionel');
