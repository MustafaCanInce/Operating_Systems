#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main (int args, char** argv)
{
	pid_t pid;
	int x = 1;
	
	pid = fork();

	if(pid == 0)
	{/* child */
		printf("child : x=%d\n", ++x);
	}
	else
	{/* parent */
		printf("parent : x=%d\n", --x);
	}
	return 0;
}
