#include <stdio.h>

int main (){
    int b,h,res;

    puts("area de un triangulo;\n");
    puts("Dame el valor de la base;\n");
    scanf("%d", &b);
    puts("Dame el valor de la altura\n");
    scanf("%d", &h);

    res=(b*h)/2;

    printf("El area del triangulo es;%d\n",res);

    return 0;

 
}