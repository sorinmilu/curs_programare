<?php

//Executie php array_map.php

$nume = ["computer", "kompjuter", "ordinador", "urdinatore", "tietokone"];

$entities = array_map(fn($nm) => print $nm."\n", $nume);
