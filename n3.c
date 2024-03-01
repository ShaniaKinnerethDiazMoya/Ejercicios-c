#include <stdio.h>
 int main (){
    int b,h,res;

    puts("area de un rectangulo;\n");
    puts("Dame el valor de la base;\n");
    scanf("%d", &b);
    puts("Dame el valor de la altura\n");
    scanf("%d", &h);

    res=b*h;

    printf("El area del rectangulo es;%d\n",res);

    return 0;

 }