#include <gmp.h>
#include <stdio.h>
#include <assert.h>


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

    double f;
    struct
    {
        // Order is important.
        // Here the members of the union data structure
        // use the same memory (32 bits).
        // The ordering is taken
        // from the LSB to the MSB.
        unsigned long long mantissa : 52;
        unsigned int exponent : 11;
        unsigned int sign : 1;

    } rawd;
} mydouble;


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

void printLBinary(unsigned long long n, int i)
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



void printFloat(myfloat var)
{

    // Prints the IEEE 754 representation
    // of a float value (32 bits)

    printf("%d | ", var.raw.sign);
    printBinary(var.raw.exponent, 8);
    printf(" | ");
    printBinary(var.raw.mantissa, 23);
}

void printDouble(mydouble var)
{

    // Prints the IEEE 754 representation
    // of a float value (32 bits)

    printf("%d | ", var.rawd.sign);
    printBinary(var.rawd.exponent, 11);
    printf(" | ");
    printBinary(var.rawd.mantissa, 52);
}


int main(){
    //char inputStr[] = "18446744073709551615";
    char inputStr[] = "100000000000000";
    int flag;
    mpz_t n;
    mpz_t ref;
    mpf_t ftemp;
    long int hinterval = 10000000000000;
    float pastval;
    float curval;
    double pastvd;

    myfloat var;
    mydouble dblv;

    mpf_init(ftemp);
    mpf_set_ui(ftemp,0);


    mpz_init(n);
    mpz_set_ui(n,0);

    mpz_init(ref);
    mpz_set_ui(ref,0);


    flag = mpz_set_str(n,inputStr, 10);
    assert (flag == 0); /* If flag is not 0 then the operation failed */

    flag = mpz_set_str(ref,inputStr, 10);
    assert (flag == 0); /* If flag is not 0 then the operation failed */

    printf("reference number: \n");
    mpz_out_str(stdout,10,ref);
    printf ("\n");


//    mpz_sub_ui(n,n,hinterval);
    printf("start number: \n");
    mpz_out_str(stdout,10,n);
    printf ("\n");

    mpf_set_z(ftemp, n);
    pastvd = mpf_get_d(ftemp);
    pastval = (float) pastvd;


    for (int i=1; i<hinterval*2; i++) {
        mpz_add_ui(n,n,1);


        mpf_set_z(ftemp, n);
        double myd = mpf_get_d(ftemp);
        curval = (float) myd;

        if (pastvd != myd) {
            printf ("----mark double----\n");
            printf ("i este: %8d mpz este: ", i);
            mpz_out_str(stdout,10,n);
            printf ("   Double is: %lf", myd);
            printf ("   Float is: %f ", curval);
            dblv.f = curval;
            printDouble(dblv);
            printf ("\n");


            pastvd = myd;
        }

        if (pastval != curval) {
            printf ("----mark float----\n");

            printf ("i este: %8d mpz este: ", i);
            mpz_out_str(stdout,10,n);
            printf ("   Double is: %lf", myd);
            printf ("   Float is: %f  :- ", curval);

            var.f = curval;
            printFloat(var);
            printf ("\n");

            pastval = curval;
        }


    }

    mpz_clear(n);

    return 0;
}