#include <stdio.h>
#include <stdlib.h>

short test(short x, short y) {
    short val = 12+(y);
    if(x<0)
    {
        // val = x*y;
        // short rdx = x;
        // if(y == x)
        // {
        //    val = rdx;
        // }
        if(x<y){
            val = x*y;
        }
        else
        {
            val =x|y;
        }
    }
    else if(y>10)
    {
        val = x/y;
    }
    return val;
}

int main(void) 
{
    int **test[9];
    printf("%ld",sizeof(short*));
}