#include <stdio.h>

int main ( void ){
    int p = 10 , q = 0 , and , or , not ;

    and = p && q ; // El resultado es 0
    or = p || q ; // El resultado es 1
    not = ! p ; // El resultado es 0

    return 0;
}