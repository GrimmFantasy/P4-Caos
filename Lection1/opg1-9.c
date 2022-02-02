#include <stdio.h>
#include <stdlib.h>

void printArray(long array[])
{
    for (int i = 0; i < 20; i++)
    {
        printf("%lu - %lx\n", array[i], array[i]);
    }
}

void swap(long *a, long *b){
    long temp = *a;
    *a = *b;
    *b = temp;
    

}

int main(void) 
{
    long array[20];
    for (int i = 0; i < 20; i++){
        array[i] = i + 69;
    }
    printArray(array);
    long *x;
    x = &array[3];
    printf("adress: %p\n", x);
    long int c = *x;
    printf("Defrencening: %lu\n", c);
    swap(&array[0], &array[5]);
    printArray(array);
    long y =*(x+9);
    printf("%lx\n", y);
    y=*(x+100);
    printf("%lx\n", y);
    //Causes core dumb
    //y=*(x+100000); 
    //printf("%lx\n", y);

    return 0;
}