# SimHYMN assembler file
#
# Cere succesiv doua numere la consola si afiseaza produsul lor
# se incarca in programul simhymn
# http://www.cburch.com/socs/hymn/index.html
#

LOAD prod               #Reseteaza valoarea variabilei prod
SUB prod                  #la 0 pentru a permite mai multe
STOR prod               #rulari succesive ale programului	
READ                         #Citeste o valoare de la IO
STOR Va                      #Stocheaza valoarea citita in variabila Va
READ                         #Citeste o valoare de la IO
STOR Vb                      #Stocheaza valoarea citita in variabila Vb
STOR decr                    #Stocheaza valoarea citita in variabila de decrementare
LOOP:                        #Porneste o bucla
    LOAD prod                #Incarca variabila prod in acumulator
    ADD Va                    #Adauga variabila Va
    STOR prod                #Stocheaza noua valoare a prod
    LOAD decr                #Incarca variabila de decrementare in acumulator
    SUB one                   #Scade valoarea variabilei one (1) din acumulator
    STOR decr                #Copiaza in memorie descr
JPOS LOOP                    #Sare inapoi la LOOP daca val din acumulator e pozitiva
LOAD prod                    #Incarca Va in acumulator
WRITE                        #Scrie valoarea din acumulator la IO
HALT                         #Opreste programul
Va:0                         #declara valoarea 0 pentru variabila Va
Vb:0                         #declara valoarea 0 pentru variabila Vb
decr:0                       #declara valoarea 0 pentru variabila decr
one:1                        #declara valoarea 1 pentru variabila one
prod:0                       #declara valoarea 0 pentru variabila prod
