#include <sys/wait.h>
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
// output no understanding

int main()
{  
   pid_t p1, p2; 
   p1 = fork();
   printf("Hello from %d, my parent: %d\n", getpid(), getppid());
   p2 = fork();
   printf("Hello from %d, my parent: %d\n", getpid(), getppid());
}   
