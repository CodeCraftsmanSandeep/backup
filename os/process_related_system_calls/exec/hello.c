#include <stdio.h>
#include <stdlib.h>
 #include <unistd.h>
#include <sys/time.h>
#include <sys/wait.h>
int main()
{
  printf("Hello world!!\n");
  sleep(10);
 // exit(255); // here only least significant 8 bits will be returned
  exit(EXIT_SUCCESS);
}  
