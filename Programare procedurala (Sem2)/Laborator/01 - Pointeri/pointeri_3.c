#include <stdio.h>

int main()
{
    float num1, num2;    // Variabile normale
    float *ptr1, *ptr2;  // Variabile de tip pointer

    float sum, diff, mult, div;

    ptr1 = &num1; // ptr1 stocheaza addresa variabilei num1
    ptr2 = &num2; // ptr2 stocheaza addresa variabilei num2

    /* Solicitam cele doua variabile cu ajutorul pointerilor */
    printf("Enter any two real numbers: ");
    scanf("%f%f", ptr1, ptr2);

    /* Operatii aritmetice */
    sum  = *ptr1 + *ptr2;
    diff = *ptr1 - *ptr2;
    mult = *ptr1 * *ptr2;
    div  = *ptr1 / *ptr2;

    /* Print the results */
    printf("Suma = %.2f\n", sum);
    printf("Diferenta = %.2f\n", diff);
    printf("Produs = %.2f\n", mult);
    printf("Impartire = %.2f\n", div);

    return 0;
}

