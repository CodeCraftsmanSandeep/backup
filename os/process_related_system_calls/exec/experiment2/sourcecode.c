#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char* argv[]){
	char* environ[] = {NULL};
	argv[0] = "calsum.out";
	execve("calsum.out", argv, environ);
	return 0;
}
