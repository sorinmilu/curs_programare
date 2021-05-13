//gcc -Wall file_read_pointers.c -o file_read_pointers


#include <stdio.h>

int main()
{
  FILE *fp;
  int c;
  fp = fopen("test.txt", "r");

  if (fp) {
      printf("read_ptr: %p\n", fp->_IO_read_ptr);
      printf("read_ptr: %p\n", fp->_IO_write_ptr);
      c = getc(fp);
      printf("Char: %c\n", c);
      printf("read_ptr addr: %p\n", fp->_IO_read_ptr);
      printf("write_ptr: %p\n", fp->_IO_write_ptr);
      printf("read_ptr: %c\n", *(fp->_IO_read_ptr));
      c = getc(fp);
      printf("Char: %c\n", c);
      printf("read_ptr addr: %p\n", fp->_IO_read_ptr);
      printf("write_ptr: %p\n", fp->_IO_write_ptr);
      printf("read_ptr: %c\n", *(fp->_IO_read_ptr));
      c = getc(fp);
      printf("Char: %c\n", c);
      printf("read_ptr addr: %p\n", fp->_IO_read_ptr);
      printf("write_ptr: %p\n", fp->_IO_write_ptr);
      printf("read_ptr: %c\n", *(fp->_IO_read_ptr));

}
  fclose(fp);
  return 0;
}

