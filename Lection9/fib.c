#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

//fib(n) = fib(n-1)+fib(n-2)
//fib(0)=0; fib(1)=1
int fib(int n);
//Only values 0-255 can be transferred using exit as it is normally intended to carry a simple exit code; not the result of a complex computation. 
//For training with fork only: it is hopelessly inefficient as parallelization of fib
int main(int argc, char* argv[] ) {
 if(argc==2)  
	(void) fib(atoi(argv[1]));
}


int fib(int n) {
    printf("child %d computing %d\n",getpid(),n);
  if(n==0) exit(0);
  if(n==1) exit(1);
  pid_t c1;
  pid_t c2;

  c1=fork();
  if(c1==0) {
    //CHILD
    exit( fib(n-1)); 
  }  else {
    //Parent
    c2=fork();
    if(c2==0) {
    exit(fib(n-2));
    }else {
    //PARENT
    pid_t c1,c2;
    int wStatus1=-1;
    int wStatus2=-1;
    c1=wait(&wStatus1);
    c2=wait(&wStatus2);

    if( ( WIFEXITED(wStatus1) )&& ( WIFEXITED(wStatus2) ) ){ //did child exit normally
      int exitValue1=WEXITSTATUS(wStatus1);
      int exitValue2=WEXITSTATUS(wStatus2);
        printf("Process %d computed FIB(%d)==%d (got %d from %d and %d from %d)\n",
		getpid(),n, fib, exitValue1, c1, exitValue2,c2);
      exit(fib);
     }
  }}
 printf("ONLY Reached if something went wrong!\n");
}