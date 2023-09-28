#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
  pid_t p1, xyz, exitpid;
  int i=0;
  int wait_status; 
  p1= getpid(); 
  printf("I am parent. Before fork. My pid is %d\n", p1);
  
  i=1;
     
  xyz=fork();
  if (xyz<0)
     return (-1);
  
  if (xyz ==0)
  {   
      printf("I am child, my pid is %d, My parent has pid %d i = %d \n", getpid(), getppid(), i);
      i += 5;
      printf("I am child, i = %d now \n", i);
      
      xyz = fork();
      if (xyz < 0)
         return (-1);
      
      i+=20;
//      exit(EXIT_SUCCESS);     // 0 will be catched

      if (xyz == 0)
      { 
      	wait(&wait_status);
        printf("nested child..my pid is %d my ppid is %d, i is %d\n", getpid(), getppid(), i);
      }
      else 
      {  
         i+=7;
         printf ("nested..my child's pid is %d i is %d \n",xyz, i);
      }
      return 10; // 10 will be catched
  }
  else 
  {  
    
    i += 100;
    printf("I am parent after fork, pid of my child is %d, i = %d \n", xyz, i);   

      
    exitpid=waitpid(-1, &wait_status, 0);
    if (WIFEXITED(wait_status)) 
    {
        printf("Now my child has finished. Ret value of wait is %d  exit status is %d\n", exitpid, WEXITSTATUS(wait_status)); 
    }
    printf("i is %d \n now", i);      
  }
     
}  
   
