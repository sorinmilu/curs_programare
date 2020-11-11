#include <stdio.h>

char tabela[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

int verifica();
void tabla();

int main()
{
    int jucator = 1, i, mutare;

    char mk;
    do
    {
        tabla();
        jucator = (jucator % 2) ? 1 : 2;

        printf("Jucator %d, alegeti o pozitie pe tabla:  ", jucator);
        scanf("%d", &mutare);

        mk = (jucator == 1) ? 'X' : 'O';

        if (mutare == 1 && tabela[1] == '1') {
     //-----
        } else if (mutare == 2 && tabela[2] == '2') {
     //-----
       } else if (mutare == 3 && tabela[3] == '3') {
     //-----
       } else if (mutare == 4 && tabela[4] == '4') {
     //-----
        } else if (mutare == 5 && tabela[5] == '5') {
     //-----
       } else if (mutare == 6 && tabela[6] == '6') {
     //-----
       } else if (mutare == 7 && tabela[7] == '7') {
     //-----
       } else if (mutare == 8 && tabela[8] == '8') {
     //-----
       } else if (mutare == 9 && tabela[9] == '9') {
     //-----
       } else {
            printf("Mutare invalida ");
            jucator--;
            getchar();
        }
        i = verifica();

        jucator++;
    }while (i ==  - 1);

    tabla();

    if (i == 1)
        printf("==>\ajucator %d castiga ", --jucator);
    else
        printf("==>\aEgalitate");

    getchar();

    return 0;
}

/*

Returneaza Starea jocului
1 Jocul s-a terminat cu un rezultat
-1 Jocul continua
O Jocul se termina egal

*/

int verifica()
{
    if (tabela[1] == tabela[2] && tabela[2] == tabela[3])
        return 1;

     //else if-----
        return 1;

     //else if-----
        return 1;

     //else if-----
        return 1;

     //else if-----
        return 1;

     //else if-----
        return 1;

     //else if-----
        return 1;

     //else if-----
        return 1;

    else if (tabela[1] != '1' && tabela[2] != '2' && tabela[3] != '3' &&
        tabela[4] != '4' && tabela[5] != '5' && tabela[6] != '6' && tabela[7]
        != '7' && tabela[8] != '8' && tabela[9] != '9')

        return 0;
    else
        return  - 1;
}


/*

Deseneaza tabela de joc

*/


void tabla()
{

    /* Instructiunea urmatoare curata ecranul */
    printf("\033[H\033[J");

    printf("\n\n\t X si 0 \n\n");

    printf("Jucator 1 (X)  -  Jucator 2 (O)\n\n\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", tabela[1], tabela[2], tabela[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", tabela[4], tabela[5], tabela[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", tabela[7], tabela[8], tabela[9]);
    printf("     |     |     \n\n");
}


/*
-----output------

        X si 0

Jucator 1 (X)  -  Jucator 2 (O)


     |     |
  1  |  2  |  3
_____|_____|_____
     |     |
  4  |  X  |  6
_____|_____|_____
     |     |
  7  |  8  |  9
     |     |

Jucator 2, alegeti o pozitie pe tabla:


-------------------
*/
