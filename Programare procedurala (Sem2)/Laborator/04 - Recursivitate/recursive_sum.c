#include <stdio.h>

int sum(int arr[], int start, int len);

int main()
{
   int arr[5] = {12,32,45,21,8};
   int sa = sum(arr, 0, 5);
   printf("Sum: %d\n", sa);
   return 0;
}

int sum(int arr[], int start, int len)
{
   printf ("Start: %d, Len: %d\n", start, len);
   if(start >= len) {
       printf("Rstop 0\n");
       return 0;
   } else {
       int ret = (arr[start] + sum(arr, start + 1, len));
       printf("Returning %d\n", ret);
       return ret;
   }
}
