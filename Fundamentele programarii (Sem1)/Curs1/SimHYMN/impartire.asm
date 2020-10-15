LOAD div       #Reseteaza valoarea div la 0
SUB div        #Pentru a permite rulari succesive
STOR div       #ale programului    
READ           #Citeste o valoare de la IO
STOR Va        #Stocheaza valoarea citita in variabila Va
READ           #Citeste o valoare de la IO
STOR Vb        #Stocheaza valoarea citita in variabila Vb
LOOP:          #Porneste o bucla
    LOAD Va    
    SUB Vb      #Adauga variabila Va
    STOR Va    
    LOAD div
    ADD one     #Scade valoarea variabilei one (1) din acumulator
    STOR div  #Copiaza in memorie descr
    LOAD Va    
JPOS LOOP      #Sare inapoi la LOOP daca val din acumulator e pozitiva
LOAD div      #Incarca Va in acumulator
WRITE          #Scrie valoarea din acumulator la IO
HALT           #Opreste programul
Va:0           #declara valoarea 0 pentru variabila Va
Vb:0           #declara valoarea 0 pentru variabila Vb
one:1          #declara valoarea 1 pentru variabila one
div:0          #declara valoarea 0 pentru variabila prod    
