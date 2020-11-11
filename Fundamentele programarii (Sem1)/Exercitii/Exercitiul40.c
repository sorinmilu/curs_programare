#include <stdio.h>

     //-----
     //-----
     //-----

int main()
{
  int arr[14] = {12,13,21,54,23,56,75,29,43,46,36,32,19,72};
  int asize = sizeof(arr)/sizeof(arr[0]);
  printstr(arr,asize);
  printf("Max: \%i\n", max(arr, asize));
  printf("Min: \%i\n", min(arr, asize));
  return 0;
}


int max(int data[], int size)
{
     int max = data[0];
     int c;
     //for-----
     //if-----
     //-----
     //-----
     //-----
     return max;
}

int min(int data[], int size)
{
     int min = data[0];
     int c;
     //for-----
     //if-----
     //-----
     //-----
     //-----
    return min;
}

void printstr(int data[], int size)
{
   int i;
     //for-----
     //-----
     //-----
}


/*
-----output------

12
13
21
54
23
56
75
29
43
46
36
32
19
72
Max: 75
Min: 12

-------------------
*/