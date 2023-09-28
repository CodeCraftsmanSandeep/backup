#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main(int argc, char* argv[]){
	int pipefd[2];
	int pipe_id = pipe(pipefd);
	
	int cpid = fork();
	if(cpid == -1 || pipe_id == -1){
		return EXIT_FAILURE;
	}
	if(cpid == 0){
		// child
		int a;
		read(pipefd[0], &a, sizeof(int));
		printf("%d \n", a);
		exit(EXIT_SUCCESS);
	}else{
		// parent
		int a = 22;
		write(pipefd[1], &a, sizeof(int));
		wait(NULL);
	}
	return 0;
} 
