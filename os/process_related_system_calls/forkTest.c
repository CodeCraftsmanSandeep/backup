#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
	pid_t pid, exitpid;
	int i = 0;
	int* wait_status;
	printf("Hi !! I am Parent, yet I did not get my child (i.e before fork()). My id is : %d and i = %d, &i = %d\n", getpid(), i, &i);
	i += 1;
	
	pid = fork(); 
	/*
	fork() 
	 -> will return 0 to the child process.
	 -> will return childpid to the parent process.
	 -> will return -1 on insuccesfull creation of child process.
	*/
	i += 1;
	
	if(pid == 0){
		// This is a child process.
		printf("Hi !! I am child, my parent id is %d and my id is %d\n", getppid(), getpid());
		i += 10; // Child has copy of i of line 7 and not i
		printf("Child i: %d and &i : %d\n", i, &i);
	}else{
		// This is a parent process
		printf("I am parent, my id is %d and my child id is %d\n", getpid(), pid);
		
		//wait(wait_status);
		i += 100; // same i as line 7
		printf("Parent i: %d and &i : %d\n", i, &i);
	}
	printf("\ni value: %d\n", i);
	return 0;
}
