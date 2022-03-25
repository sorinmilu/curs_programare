/* calculeaza media aritmetica folosind o bucla do

gcc -Wall hello_args.c -o hello_args

*/


#include <stdio.h>

int main(int argc, char **argv)
{
    printf("Numar argumente, %d\n", argc);
    printf("Argumentul 0, %s\n", argv[0]);
    printf("Argumentul 1, %s\n", argv[1]);
    printf("Argumentul 2, %s\n", argv[2]);
    return 0;
}
