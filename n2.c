#include <stdio.h>

int main (){
    int columnas=1, filas=7;
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            printf("*");
        }
        printf("\n");
        columnas++;
    }
    return 0;
}