#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 0x55;
    int b = 0x46;
    int A = a & b;
    int A2 = a && b;

    printf("%x - %x\n", A, A2);
    A = a | b;
    A2 = a || b;
    printf("%x - %x\n", A, A2);
    A = ~a | ~b;
    A2 = !a || !b;
    printf("%x - %x\n", A, A2);
    A = a & !b;
    A2 = a && ~b;
    printf("%x - %x\n", A, A2);
   
    return 0;
}