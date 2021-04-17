//gcc -Wall callback.c -o callback

#include<stdio.h>

void callback(int n)
{
    printf("Eu sunt functia callback si am primit %d\n", n);
}

void executor(void (*ptr)())
{
    int mi = 13;
    (*ptr) (mi); // callback to A
}

int main()
{
    //se atribuie unui pointer o referinta catre functia callback
    void (*ptr)() = &callback;
    //se lanseaza in executie functia executor cu argumentul ptr
    executor(ptr);
    return 0;
}