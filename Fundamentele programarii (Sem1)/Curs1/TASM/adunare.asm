Data segment

msg db 0dh,0ah,"Introduceti primul numar: $"
msg1 db 0dh,0ah,"Introduceti al doilea numar: $"
suma db 0dh,0ah,"Rezultatul este: $"

Data ends
Code segment
assume CS:Code,DS:Data
start:
mov ax,Data ; muta Data in registrul ax
mov DS,ax
mov dx,offset msg ; Afiseaza msg
mov ah,09h  ; muta 09h in registrul de intreruperi
int 21h ; apeleaza codul de intrerupere
mov ah,01h ; muta 01h in registrul de intreruperi
int 21h  ; apeleaza codul de intrerupere
sub al,30h ; Accept 10's place of the Number
mov bl,al

mov dx,offset msg1 ; Afiseaza msg1
mov ah,09h
int 21h
mov ah,01h ; codul de intrerupere pentru input
int 21h
sub al,30h ; transforma din ascii in numar
mov cl,al

add bl,cl ; Adauga cele doua numere

mov dx,offset suma ; afiseaza stringul “suma”
mov ah,09h
int 21h
mov cl,bl ; stocheaza valoarea sumei in cl
call AsciiConv ; converteste la ASCII pentru afisare
mov dl,bl ; muta in registrul stream
mov ah,02h  ; seteaza comanda de intrerupere
int 21h ; lanseaza intreruperea
mov ah,4ch ; seteaza comanda de intrerupere de final
int 21h ; lanseaza intreruperea

AsciiConv proc ; < 0a adaugam 30h
 cmp bl,0ah ; >=  0a adaugam inca  07h
 jc skip
 add bl,07h
 skip: add bl,30h
 ret
 endp

Code ends
end start

