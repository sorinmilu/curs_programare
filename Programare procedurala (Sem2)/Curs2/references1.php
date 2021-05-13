<?php
//php references1.php


$a = 100;
$pa = &$a;
$pa2 = &$pa;

echo "$a\n";
echo "$pa\n";
echo "$pa2\n";
