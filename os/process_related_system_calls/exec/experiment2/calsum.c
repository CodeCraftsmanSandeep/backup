#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	printf("Hello I will calculate sum\n");
	int sum = 0;
	for(int i = 1; i < argc; i++){
		printf("%s ", argv[i]);
		sum += atoi(argv[i]);
	}
	printf("\nSum: %d\n", sum);
	printf("I am leaving\n");
	return 2;
}
