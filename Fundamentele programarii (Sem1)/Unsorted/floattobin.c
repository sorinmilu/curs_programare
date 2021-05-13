
// C program to convert a real value
// to IEEE 754 floating point representaion

#include <stdio.h>

void printBinary(int n, int i)
{

    // Prints the binary representation
    // of a number n up to i-bits.
    int k;
    for (k = i - 1; k >= 0; k--) {

        if ((n >> k) & 1)
            printf("1");
        else
            printf("0");
    }
}

typedef union {

    float f;
    struct
    {

        // Order is important.
        // Here the members of the union data structure
        // use the same memory (32 bits).
        // The ordering is taken
        // from the LSB to the MSB.
        unsigned int mantissa : 23;
        unsigned int exponent : 8;
        unsigned int sign : 1;

    } raw;
} myfloat;


typedef union {

    float f;
    struct
    {

        // Order is important.
        // Here the members of the union data structure
        // use the same memory (32 bits).
        // The ordering is taken
        // from the LSB to the MSB.
        unsigned int mantissa : 23;
        unsigned int exponent : 8;
        unsigned int sign : 1;

    } raw;
} myfloat;



// Function to convert real value
// to IEEE foating point representation
void printIEEE(myfloat var)
{

    // Prints the IEEE 754 representation
    // of a float value (32 bits)

    printf("%d | ", var.raw.sign);
    printBinary(var.raw.exponent, 8);
    printf(" | ");
    printBinary(var.raw.mantissa, 23);
    printf("\n");
}


// Driver Code
int main()
{

    unsigned long long maxint = 18446744073709551615;
    myfloat var;
    printf ("maxint este: %llu\n", maxint);
    float pastval = maxint;

    var.f = maxint;
    printf ("maxint este: %llu\n", maxint);
    printf("IEEE 754 representation of %f is : \n", var.f);
    printIEEE(var);

    int count = 0;
    for (int i = 0; i<10000000; i++) {
        maxint -= i;
        float mi = maxint;
        count++;
        if (pastval != mi) {
            printf ("--------------%d----------------\n", count);
            printf ("mi este: %f\n", mi);
            printf ("pastval este: %f\n", pastval);
            printf ("maxint este: %llu\n", maxint);
            printf ("diferenta: %llu\n", (unsigned long long)(pastval-mi));
            pastval = mi;
            var.f = maxint;
            printf("IEEE 754 representation of %f is : \n", var.f);
            printIEEE(var);
            count = 0;
        }

    }
    return 0;
}
