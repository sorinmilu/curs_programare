# SimHYMN assembler file
#
# Cere succesiv doua numere la consola si le compara
# se incarca in programul simhymn
# http://www.cburch.com/socs/hymn/index.html
#

READ      #Citeste o valoare de la IO si o plaseaza in acumulator
STOR Va   #Stocheaza valoarea citita in variabila Va
READ      #Citeste o valoare de la IO si o plaseaza in acumulator
SUB Va    #Adauga valoarea variabilei Va in acumulator
JZER CEQ  #Sare la EQ daca acumulatorul este zero
LOAD neq  #Daca acumulatorul nu e zero, incarca variabila neq in acumulator
WRITE	  #scrie valoarea din acumulator la IO 
HALT	  #Opreste programul
CEQ:       
LOAD eq   #Incarca eq in acumulator
WRITE     #scrie valoarea din acumulator la IO 
HALT      #Opreste programul
Va:0      #declara valoarea Va ca fiind 0
neq:-1	  #declara valoarea neq ca fiind -1
eq:1      #declara valoarea eq ca fiind 1