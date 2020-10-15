%prolog se ruleaza cel mai frecvent in mod interactiv
%executabilul poate fi swipl sau gprolog
%sesiunea arata astfel
%    consult('family.pl').
%    mama(X,pugsley).
%    X = morticia
%
%    mama(morticia,Y)
%    X = heidi.
%
%    frate(X,Y).
%    X = pugsley,
%    Y = wednesday ;
%    X = wednesday,
%    Y = pugsley
%
%    halt.
%
%
%
%    prolog va returna ambele raspunsuri posibile (in ordinea directa si inversa)
%    halt. operste interpretorul si se intoarce la linia de comanda

tata(gomez,pugsley).
tata(gomez,wednesday).
mama(morticia,pugsley).
mama(morticia,wednesday).

frate(X,Y) :- mama(Z,X),mama(Z,Y), X \== Y.
