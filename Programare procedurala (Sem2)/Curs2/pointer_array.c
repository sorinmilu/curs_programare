//gcc -Wall pointer_array.c -o pointer_array

#include <stdio.h>

int main()
{
    int arr[4] = {2,23,5,11};
    int *p = arr;
    int (*ptr)[4] = &arr;

    printf("--------------adresele---------- \n");
    printf("adresele primului membru: \n");
    printf("arr       este: %p\n", arr);
    printf("&(arr[0]) este: %p\n", &(arr[0]));
    printf("p         este: %p\n", p);
    printf("ptr       este: %p\n\n", ptr);
    printf("adresele celui de-al doilea membru: \n");
    printf("arr       este: %p\n", arr+1);
    printf("&(arr[1]) este: %p\n", &(arr[1]));
    printf("p + 1     este: %p\n", p+1);
    printf("*ptr+1    este: %p\n\n", *ptr+1);
    printf("adresele celui de-al treilea membru: \n");
    printf("arr       este: %p\n", arr+2);
    printf("&(arr[1]) este: %p\n", &(arr[2]));
    printf("arr       este: %p\n", p+2);
    printf("*ptr+2    este: %p\n\n", *ptr+2);
    printf("adresele celui de-al patrulea membru: \n");
    printf("arr       este: %p\n", arr+3);
    printf("&(arr[3]) este: %p\n", &(arr[3]));
    printf("p + 3     este: %p\n", p+3);
    printf("*ptr+3    este: %p\n\n", *ptr+3);

    printf("--------------valorile---------- \n");
    printf("valorile primului membru: \n");
    printf("arr[0]    este: %d\n", arr[0]);
    printf("*p        este: %d\n", *p);
    printf("*arr      este: %d\n", *arr);
    printf("(*ptr)[0] este: %d\n\n", (*ptr)[0]);
    printf("valorile celui de-al doilea membru: \n");
    printf("arr[1]    este: %d\n", arr[1]);
    printf("*(p+1)    este: %d\n", *(p+1));
    printf("*(arr+1)  este: %d\n", *(arr+1));
    printf("(*ptr)[1] este: %d\n\n", (*ptr)[1]);
    printf("valorile celui de-al treilea membru: \n");
    printf("arr[2]    este: %d\n", arr[2]);
    printf("*(p+2)    este: %d\n", *(p+2));
    printf("*(arr+2)  este: %d\n", *(arr+2));
    printf("(*ptr)[2] este: %d\n\n", (*ptr)[2]);
    printf("valorile celui de-al patrulea membru: \n");
    printf("arr[3]    este: %d\n", arr[3]);
    printf("*(p+3)    este: %d\n", *(p+3));
    printf("*(arr+3)  este: %d\n", *(arr+3));
    printf("(*ptr)[3] este: %d\n\n", (*ptr)[3]);

    return 0;
}


