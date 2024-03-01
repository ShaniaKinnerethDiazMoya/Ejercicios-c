#include <stdio.h>

int main(){
    float a,b,c,d,e,f, resultado=0;

    puts("Introduce los valores para la siguiente operacion");
    puts("  a+b  ");
    puts("    __");
    puts("    c");
    puts("  _____");
    puts("  d+e  ");
    puts("    __");
    puts("    f");
    
    puts("Introduce el valor de a:");
    scanf("%f", &a);
    puts("Introduce el valor de b:");
    scanf("%f", &b);
    puts("Introduce el valor de c:");
    scanf("%f", &c);
    puts("Introduce el valor de d:");
    scanf("%f", &d);
    puts("Introduce el valor de e:");
    scanf("%f", &e);
    puts("Introduce el valor de f:");
    scanf("%f", &f);

    resultado=(a+b/c)/(d+e/f);

    printf("El resultado es: %f", resultado);

    return 0;

}