<?php

//Executie php main_func1.php

$array = array(12.32, 16.21, 10, 18.1);
$sum = 0;
for ($i = 0; $i < count($array); ++$i) {
   $sum += $array[$i];
}

$average = $sum / count($array);

#$average = array_sum($array) / count($array);

echo $average;