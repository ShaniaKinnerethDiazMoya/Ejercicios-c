#include <stdio.h>

int main()
{
   int a, b, suma;

   printf( "Introduzca primer numero (entero): " );
   scanf( "%d", &a );
   printf( "Introduzca segundo numero (entero): " );
   scanf( "%d", &b );

   suma = a + b;

   if ( suma > 0 )
      printf( "LA SUMA SI ES MAYOR QUE CERO." );
   else
      printf( "LA SUMA NO ES MAYOR QUE CERO." );

   return 0;
}
