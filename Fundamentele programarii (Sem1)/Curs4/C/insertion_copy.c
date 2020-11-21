#include <stdio.h>
#include <stdlib.h>

int main()

{
   int data[] = {12,23,5,7,2,9,11,13,9};
   int *sorted = NULL;
   int num = sizeof(data)/sizeof(data[0]);

   printf("Inainte de sort:\n");
   printstr(data,num);
   sorted = insertion(data, num);
   printf("Dupa sort :\n");
   printstr(data,num);
   printf("Sorted :\n");
   printstr(sorted,num);
   return 0;
}
