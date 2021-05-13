//gcc -Wall union_struct.c -o union_struct

#include <stdio.h>

typedef union
{
 struct
 {
   unsigned char bit8 : 1;
   unsigned char bit7 : 1;
   unsigned char bit6 : 1;
   unsigned char bit5 : 1;
   unsigned char bit4 : 1;
   unsigned char bit3 : 1;
   unsigned char bit2 : 1;
   unsigned char bit1 : 1;
 }u;
 char status;
}DeviceStatus;


int main()
{
   DeviceStatus ds;
   ds.status = 121;
   printf("bits: %d %d %d %d %d %d %d %d ",ds.u.bit1,ds.u.bit2,ds.u.bit3,ds.u.bit4,ds.u.bit5,ds.u.bit6,ds.u.bit7,ds.u.bit8 );
}
