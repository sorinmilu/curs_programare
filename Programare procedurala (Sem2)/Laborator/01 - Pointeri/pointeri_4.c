#include <stdio.h>

int main()
{
    float num1, num2;    // Variabile normale
    float *ptr1, *ptr2;  // Variabile de tip pointer

    ptr1 = &num1; // ptr1 stocheaza addresa variabilei num1
    ptr2 = &num2; // ptr2 stocheaza addresa variabilei num2

    /* Solicitam cele doua variabile cu ajutorul pointerilor */
    printf("Enter any two real numbers: ");
    scanf("%f%f", ptr1, ptr2);

    /* Print the results */
    printf("Suma = %.2f\n", *ptr1 + *ptr2);
    printf("Diferenta = %.2f\n", *ptr1 - *ptr2);
    printf("Produs = %.2f\n", *ptr1 * *ptr2);
    printf("Impartire = %.2f\n", *ptr1 / *ptr2);

    return 0;
}

