# SimHYMN assembler file
#
# Cere succesiv doua numere la consola si afiseaza suma lor
# se incarca in programul simhymn
# http://www.cburch.com/socs/hymn/index.html
#

READ                 #Citeste o valoare de la IO si o plaseaza in acumulator
STOR Va            #Stocheaza valoarea citita in variabila Va
READ                 #Citeste o valoare de la IO si o plaseaza in acumulator
ADD Va               #Adauga valoarea variabilei Va in acumulator
WRITE                #Scrie valoarea din acumulator la IO
HALT                   #Opreste programul
Va:0	                     #Declara valoarea 0 pentru variabila Va
