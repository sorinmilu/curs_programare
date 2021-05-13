//gcc -Wall mystrcat.c -o mystrcat

#include <stdio.h>

char *mystrcat(char *dest, const char *src)
{
    int index_dest = 0, dest_len = 0, src_len = 0, index_src=0;

    while (dest[index_dest++]) {
        dest_len++;
    }

    while (src[index_src++]) {
        src_len++;
    }

    for (index_dest = 0; index_dest < src_len; index_dest++) {
        dest[dest_len] = src[index_dest];
        dest_len++;

    }

    return dest;
}

int main() {
  char str1[100] = "If it bleeds, ";
  char str2[] = "we can kill it.";

  mystrcat(str1, str2);

  printf ("%s\n", str1);

  return 0;
}