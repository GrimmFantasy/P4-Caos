#include <stdio.h>
#include <stdlib.h>

void inplace_swap(int *x, int *y){
    *y = *x ^ *y;
    printf("X: %d | Y: %d\n", *x, *y);
  
    *x = *x ^ *y;
    printf("X: %d | Y: %d\n", *x, *y);
  
    *y = *x ^ *y;
    printf("X: %d | Y: %d\n", *x, *y);

}

int main(void) 
{
    int *a;
    int *b;
    int i=1;
    int j=0;
    a = &i;
    b = &j;
    inplace_swap(a, b);
    
    return 0;
}