//gcc -Wall pointer_to_functions.c -o pointer_to_functions

#include<stdio.h>

void display(int n)
{
   printf("Eu sunt functia display si am primit %d\n", n);
}

void executor(void (*ptr)())
{
   int mi = 13;
   (*ptr) (mi); // apelul funcției din spatele pointerului ptr
}

int main()
{

   void (*ptr)() = &display;

   executor(ptr);
   return 0;
}
