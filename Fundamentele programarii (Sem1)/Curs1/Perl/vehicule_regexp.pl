#!/usr/bin/perl

# executie: perl vehicule_regexp.php

my $text = ' Lulu conduce bicicleta si masina; Judith conduce trotineta si vapor; Aladin conduce trotineta role si bicicleta; Heidi conduce avion role si bicicleta.';

$text =~ s/([A-Z]\w+)\sconduce.*?bicicleta.*?(;|\.)/$1/g;

print "\nCine conduce bicicleta\n";
print $text ."\n";

