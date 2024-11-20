
#include <stdio.h>

int main(){
    int numero = 1;
    while(numero<=1000){
        
        if((numero%7)!=0){
            if((numero%2)!=0){
                
                printf("%d\n", numero-1);
                
            }
        }
        numero=numero+7;
    }
    return 0;
}
