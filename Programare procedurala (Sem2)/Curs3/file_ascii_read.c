//gcc -Wall file_ascii_read.c -o file_ascii_read

#include <stdio.h>
#include <string.h>

int main() {
   char buf[1024];
   FILE *fp;
   size_t nread;

   fp = fopen("test.txt", "r");
   if (fp) {
       while ((nread = fread(buf, 1, sizeof buf, fp)) > 0) {
           printf("read: %ld:  %s\n",nread, buf);
           memset(buf, '\0', sizeof buf);
       }
       fclose(fp);
   }
   return 0;
}
