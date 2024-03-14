#include <stdio.h>

int main(){
    int numero = 1, n2, n3;
    while(numero<=500){
        n2=numero*numero;
        n3=numero*numero*numero;
        printf("%d, %d, %d\n",numero, n2, n3);
        numero++;
    }
    return 0;
}