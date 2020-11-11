#include <stdio.h>

int main() {
   int num = 0;

   printf("Introduceti un numar:\n");
   scanf("%d",&num);

     //if-----
       printf("numarul este zero\n");
     //-----

     //if-----
      printf("%d este par\n", num);
     //-----

     //if-----
      printf("%d este impar\n", num);
     //-----

   return 0;
}

/*
-----output------

Introduceti un numar:
4
4 este par

-----------------

Introduceti un numar:
5
5 este impar

-------------------
*/
