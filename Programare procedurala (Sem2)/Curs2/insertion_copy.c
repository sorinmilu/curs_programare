//gcc -Wall insertion_copy.c -o insertion_copy

#include <stdio.h>
#include <stdlib.h>

void printstr(int data[], int size)
{
    int i;
    for (i = 0; i <= size - 1; i++)
    {
          printf("%d\n", data[i]);
    }
}

int * insertion(int data[], int size)
{
   int *newArr;
   int i,temp,j;
   newArr=(int*)malloc(size*sizeof(int));
   for (i = 0 ; i <= size - 1; i++)
   {
       newArr[i] = data[i];
   }
   for (i = 0 ; i <= size - 1; i++)
   {
     j = i;
    while ( j > 0 && newArr[j] < newArr[j-1])
         {
           temp = newArr[j];
           newArr[j] = newArr[j-1];
           newArr[j-1] = temp;
           j--;
       }
    }
    return newArr;
}


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
