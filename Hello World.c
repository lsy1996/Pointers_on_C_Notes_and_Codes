#include <stdio.h>
#include <windows.h>
#include "Func_add.c"

int main ()
{
   int z;
   printf("Hello, world!\n");
   printf("How do you do?\n");
   printf("I'm doing great!\n");
   printf("00000000000\n");
   printf("00000000000\n");

   z = funcadd(3, 5);
   printf("3 + 5 = %d\n", z);

   system("pause");
   return 0;
}