#include <stdio.h>
#include <windows.h>
#include "basic_math.c"

int main ()
{
   #ifdef _DEBUG
      printf("Using Debug mode compiling...\n");    
   #else
      printf("Using Release mode compiling...\n");
   #endif

   int x, y, z;
   printf("Hello, world!\n");

   printf("3 + 5 = %d\n", add(3, 5));
   printf("3 - 5 = %d\n", sub(3, 5));
   printf("3 * 5 = %d\n", mul(3, 5));
   printf("3 / 5 = %f\n", fdiv(3, 0));

   system("pause");
   return 0;
}