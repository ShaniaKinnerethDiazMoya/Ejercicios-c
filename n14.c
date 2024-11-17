include<stdio.h>
main()
{
int vec[]= {1,2,-2,1,3,-1,5,10}, i, var;
var= i = 0;
do{
var = var + vec[i];
++i;
}while (vec[i] >0);
printf ( “ %d”, var);}
Laboratorio de Computación 1
5
14- Dado el siguiente programa indicar que resultado se obtiene.
#include<stdio.h>
main()
{
int vec[]= {1,2,-2,1,3,-1,5,10,-5,2,3}, i, var;
var= i = 0;
while( vec[i] < 10)
{
var = var + vec[i];
++i;
}
  
printf ( “ %d”, var);
}
