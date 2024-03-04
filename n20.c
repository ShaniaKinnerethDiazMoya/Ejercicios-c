#include <stdio.h>

int main ( void ){
    int p , q ;
    float x =15 , y =18 , z =20;

    p = x == y ; // p = 0
    q = (x < y ) &&( y <= z ) ; // q = 1

    return 0;
}