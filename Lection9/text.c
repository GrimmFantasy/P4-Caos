#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    //printf("fork4\n");
   //fork4();
   printf("fork5\n");
   fork5();


}

void fork4()
{
    printf("L0\n");
    if (fork() != 0) {
        printf("L1\n");
        if (fork() != 0) {
            printf("L2\n");
    }
    }
    printf("Bye\n");
}

void fork5()
{
    printf("L0\n");
    if (fork() == 0) {
        printf("L1\n");
        if (fork() == 0) {
            printf("L2\n");
        }
    }
    printf("Bye\n");
}
