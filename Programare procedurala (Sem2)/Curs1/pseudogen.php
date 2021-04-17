<?php

//Executie php pseudogen.php

$stare = 0;

function PseudoGenerator() {
   global $stare;
   if ($stare == 0) {
       $stare = 1;
       return "computer";
   } else if ($stare == 1) {
       $stare = 2;
       return "kompjuter";
   } else if ($stare == 2) {
       $stare = 3;
       return "urdinatore";
   } else if ($stare == 3) {
       $stare = 4;
       return "ordinador";
   }
}

$val = PseudoGenerator();
print "Val: ". $val ."\n";

$val = PseudoGenerator();
print "Val: ". $val ."\n";

$val = PseudoGenerator();
print "Val: ". $val ."\n";
