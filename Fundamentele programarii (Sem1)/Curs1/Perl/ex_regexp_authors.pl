#!/usr/bin/perl


my $text = 'Giancane, G (Giancane, Gabriella)[ 1 ] ; Swart, JF (Swart, Joost F.)[ 2 ] ; Castagnola, E (Castagnola, Elio)[ 3 ] ; Groll, AH (Groll, Andreas H.)[ 4 ] ;
Horneff, G (Horneff, Gerd)[ 5,6 ] ; Huppertz, HI (Huppertz, Hans-Iko)[ 7 ] ; Lovell, DJ (Lovell, Daniel J.)[ 8 ] ; Wolfs, T (Wolfs, Tom)[ 2 ] ;
Herlin, T (Herlin, Troels)[ 9 ] ; Dolezalova, P (Dolezalova, Pavla)[ 10,11 ] ; Sanner, H (Sanner, Helga)[ 12,13 ] ; Susic, G (Susic, Gordana)[ 14 ] ;
Sztajnbok, F (Sztajnbok, Flavio)[ 15 ] ; Maritsi, D (Maritsi, Despoina)[ 16 ] ; Constantin, T (Constantin, Tamas)[ 17 ] ; Vargova, V (Vargova, Veronika)[ 18 ] ;
Sawhney, S (Sawhney, Sujata)[ 19 ] ; Rygg, M (Rygg, Marite)[ 20,21 ] ; Oliveira, SK (Oliveira, Sheila K.)[ 22 ] ; Cattalini, M (Cattalini, Marco)[ 23 ] ;
Bovis, F (Bovis, Francesca)[ 1 ] ; Bagnasco, F (Bagnasco, Francesca)[ 1 ] ; Pistorio, A (Pistorio, Angela)[ 24 ] ; Martini, A (Martini, Alberto)[ 25 ] ;
Wulffraat, N (Wulffraat, Nico)[ 2 ] ; Ruperto, N (Ruperto, Nicolino)[ 1 ] ;';

$text =~ s/(\[.*?\]\s;|\(.*?\))//g;

print "\nEliminarea tuturor parantezelor\n";
print $text ."\n";