#include <stdio.h>

int main(){
    double diam = 10;
    double rad = diam/2;
    double pi = 3.1416;
    double res = rad * rad * pi;

    printf("El resultado del area de un circulo con diametro %f es: %f", diam, res);
    printf("\n");
    return 0;
}