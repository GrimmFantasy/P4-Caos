#include <stdio.h>
#include <stdlib.h>

void decode1(long *xp, long *yp, long *zp);

int main(void) 
{
   long int x = 1, y = 2, z = 3;
   printf("x: %d, y: %d, z: %d\n",x, y, z);
   decode1(&x, &y, &z);
   printf("x: %d, y: %d, z: %d\n",x, y, z);


}

void decode1(long *xp, long *yp, long *zp){
    long x, y, z;
    x = *xp;
    y = *yp;
    z = *zp;

    *yp = x;
    *zp = y;
    *xp = z;

}
