<?php

//executie: php ex_regexp_emails.php

$text = 'Cineva a scris un email de pe adresa cracanel@memyself.com către adresele: pompiliu.chininescu@doctorul.ro, cufurescu_88@toilette.com.ro 
        în care menționa dorinta de a vinde un produs îndoielnic. Consider că acest abuz trebuie pedepsit cu tărie conform politicii de toleranță ZERO 
        față de comunicări nesolicitate. Pentru aceasta, am trimis acest  email si pe adresele: 1234567890@numarulcelmaimare.xxx, 
        gentle-Man@iron-self.tv și Gladiather@caramela.tv. Dacă considerați necesar, vă rog sa trimiteți și către venerus@gineco.museum și 
        carcalete@insecticid.co.jp și dacă e absolut necesar si către seful-cel-mai-mare@supercompanie.com.';


preg_match_all('/[a-zA-Z0-9._%-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,6}/',$text,$matches);

echo "\n---Identificarea tuturor patternurilor expresiei regulate---\n\n";
foreach ($matches[0] as $match) {
    echo($match."\n");
}

echo "\n---Identificarea tuturor patternurilor expresiei regulate---\n\n";

$replaced = preg_replace('/[a-zA-Z0-9._%-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,6}/', '[email]', $text);
echo $replaced."\n";
