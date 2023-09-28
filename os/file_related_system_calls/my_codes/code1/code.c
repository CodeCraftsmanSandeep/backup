#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <sys/wait.h>

int main(){
	pid_t pid;
	int wstatus = 10;
	
	pid = fork();
	if(pid == 0){
		// child process
		printf("I am child, my id: %d\n", getpid());
		pid_t p = waitpid(pid, &wstatus, 0);		
		printf("p = %d, wstatus = %d\n", p, wstatus); // what is this wstatus ??
		exit(5);
	}else{
		// parent process
		printf("I am parent, my id: %d\n", getpid());
		pid_t p = waitpid(pid, &wstatus, 0);
		printf("p = %d, wstatus = %d\n", p, wstatus); // what is this wstatus ??
	}
}	
