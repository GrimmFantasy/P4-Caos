#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 0x87654321;
    int w =32;
    int A = x & 0xFF;
    printf("%x\n", A);
    int B = x ^ ~0xFF;
    printf("%x\n", B);
    int C = x | 0xFF;
    printf("%x\n", C);
    return 0;
}