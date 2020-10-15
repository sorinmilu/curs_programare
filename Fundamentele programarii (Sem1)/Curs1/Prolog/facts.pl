%prolog se ruleaza cel mai frecvent in mod interactiv
%executabilul poate fi swipl sau gprolog
%sesiunea arata astfel
%    consult('facts.pl').
%    cineconduce(X,bicicleta).
%    X = lulu ;
%    X = aladin ;
%    X = heidi.
%    halt.
%
%    prolog va returna mai intai primul rezultat (lulu) iar apoi va trebui sa apasati pe ; pentru urmatorul rezultat
%    halt. operste interpretorul si se intoarce la linia de comanda

conduce(lulu, [bicicleta,masina]).
conduce(judith, [trotineta,vapor]).
conduce(aladin,[trotineta,role,bicicleta]).
conduce(heidi,[avion,role,bicicleta]).

cineconduce(Pers,Objct) :- conduce(Pers, Obiecte), member(Objct, Obiecte).
