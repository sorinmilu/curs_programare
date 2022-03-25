#include <stdio.h>
#include <stdlib.h>

int main () {
    int a = 13;
    int *ptr = &a;
    printf("%d", *(int*)ptr );
}
