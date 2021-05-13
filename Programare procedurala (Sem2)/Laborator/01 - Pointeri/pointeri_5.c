#include <stdio.h>

void swap(int * num1, int * num2);

int main()
{
    int num1, num2;

    /* Solicitam numerele de la tastatura */
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);

    /* Printam valorile inainte de schimbare */
    printf("Inainte de swap in main \n");
    printf("num1 = %d \n", num1);
    printf("num2 = %d \n\n", num2);

    /* Apelam functia swap cu referintele variabilelor */
    swap(&num1, &num2);

    /* Printam valorile dupa swap */
    printf("Dupa swap in main \n");
    printf("num1 = %d \n", num1);
    printf("num2 = %d \n\n", num2);

    return 0;
}


void swap(int * var1, int * var2)
{
    int temp;

    // Copiem valoarea dereferentiata a variabilei var1 in temp
    temp = *var1;

    // Copy the value of num2 to num1
    *var1= *var2;

    // Copy the value of num1 stored in temp to num2
    *var2= temp;

    printf("Dupa schimbare, in functia swap \n");
    printf("var1 = %d \n", *var1);
    printf("var2 = %d \n\n", *var2);
}


