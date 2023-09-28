#include <sys/wait.h>
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int main(){
	pid_t p = fork();
	/*
		fork() will return pid of child to parent process
		       will return 0 to child
		       will return -1 in case of failure
	*/
	if(p == 0){
		// child process
		printf("I am child, my id is %d and my parent id is %d\n", getpid(), getppid());
	}else{
		// parent process
		printf("I am parent, my id is %d and my child id is %d\n", getpid(), p);
	}
	return 0;
}
