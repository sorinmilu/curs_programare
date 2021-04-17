<?php

//Executie php callback.php

doIt('myCallback');

function doIt($callback)
{
    $sir = "I find your lack of faith disturbing.";
    $callback($sir);
}

function myCallback($argument)
{
    print 'Am primit: ' .  $argument .  "\n";
}
