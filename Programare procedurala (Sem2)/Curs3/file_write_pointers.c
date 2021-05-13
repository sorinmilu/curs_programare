//gcc -Wall file_write_pointers.c -o file_write_pointers

#include <stdio.h>

int main()
{
  FILE *fp;
  int c = 'a';
  fp = fopen("test.txt", "w");

  if (fp) {
      printf("read_ptr: %p\n", fp->_IO_read_ptr);
      printf("read_ptr: %p\n", fp->_IO_write_ptr);
      c = putc(c,fp);
      printf("Char: %c\n", c);
      printf("read_ptr addr: %p\n", fp->_IO_read_ptr);
      printf("write_ptr: %p\n", fp->_IO_write_ptr);
      printf("read_ptr: %c\n", *(fp->_IO_read_ptr));
      c = putc(c,fp);
      printf("Char: %c\n", c);
      printf("read_ptr addr: %p\n", fp->_IO_read_ptr);
      printf("write_ptr: %p\n", fp->_IO_write_ptr);
      printf("read_ptr: %c\n", *(fp->_IO_read_ptr));
      c = putc(c,fp);
      printf("Char: %c\n", c);
      printf("read_ptr addr: %p\n", fp->_IO_read_ptr);
      printf("write_ptr: %p\n", fp->_IO_write_ptr);
      printf("read_ptr: %c\n", *(fp->_IO_read_ptr));

    }
  fclose(fp);
  return 0;
}

