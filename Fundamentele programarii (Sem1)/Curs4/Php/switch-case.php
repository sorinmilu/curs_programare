<?php
$i = 5;

switch ($i) {
   case 0:
       echo "i este egal cu 0";
       break;
   case 1:
       echo "i este egal cu 1";
       break;
   case 2:
       echo "i este >= cu 2";
       break;
   case ($i >= 4 || $i <= 6):
       echo "i este intre 4 si 6";
       break;

   default:
       echo "i este in alta parte";
}
?>
