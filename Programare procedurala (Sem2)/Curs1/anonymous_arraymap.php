<?php

// Executie: php anonymous_arraymap.php

$nume = ["computer", "kompjuter", "ordinador", "urdinatore", "tietokone"];

$entities = array_map(fn($nm) => print $nm."\n", $nume);
