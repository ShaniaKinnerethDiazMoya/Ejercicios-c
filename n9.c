#include <stdio.h>

int main()
{
   int dividendo, divisor;

   printf( "Introduzca dividendo (entero): " );
   scanf( "%d", &dividendo );
   printf( "Introduzca divisor (entero): " );
   scanf( "%d", &divisor );

   printf( "%d div %d = %d ( Resto = %d )", dividendo, divisor,
           dividendo / divisor, dividendo % divisor );

   return 0;
}
