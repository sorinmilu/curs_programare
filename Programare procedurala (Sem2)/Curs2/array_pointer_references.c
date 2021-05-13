//gcc -Wall array_pointer_references.c -o array_pointer_references

#include <stdio.h>

int main()
{
    int arr[4] = {2,23,5,11};
    int *p = arr;


    printf("*(arr+1) este: %d\n", *(arr+1));
    printf("arr[1]   este: %d\n", arr[1]);
    printf("*(p+1)   este: %d\n", *(p+1));

    printf("arr+1   este: %p\n", (arr+1));
    printf("&arr[1] este: %p\n", &arr[1]);
    printf("*(p+1)  este: %p\n", (p+1));

    return 0;
}
