//gcc -Wall file_fgets.c -o file_fgets

#include <stdio.h>
#include <string.h>

int main() {
   char buf[1024];
   FILE *fp;
   size_t nread;

   fp = fopen("testlg.txt", "r");
   if (fp) {
       while (fgets(buf, sizeof(buf), fp)) {
        printf("citit: %s", buf);
        }
       fclose(fp);
   }
   return 0;
}



