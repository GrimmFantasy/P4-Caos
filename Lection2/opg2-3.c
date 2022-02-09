#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int tadd_ok(int x, int y);

int main(void) 
{
    printf("%d\n",tadd_ok(INT_MAX-1, 2));
    
}
int tadd_ok(int x, int y){
    if((INT_MAX >= x) && (INT_MAX >= y) && (INT_MIN <= x) && (INT_MIN <= y))
    {
        if ((INT_MAX-x) >= y && (INT_MAX-y) >= x && (INT_MIN+x) <= y && (INT_MIN+y) <= x )
        {
            return 1;
        }
        else{
            return 0;
        }
        
    }
    else{
        return 0;
    }
}