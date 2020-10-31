#!/usr/bin/perl

# executie: perl vehicule_regexp.php

my $text = ' Lulu conduce bicicleta si masina; Judith conduce trotineta si vapor; Aladin conduce trotineta role si bicicleta; Heidi conduce avion role si bicicleta.';

print "\nCine conduce bicicleta\n";

while ($text =~ /([A-Z]\w+)\sconduce[^;]*?bicicleta.*?(;|\.)/g) {
    print $1."\n";
}

