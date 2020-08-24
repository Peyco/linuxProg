#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

// ./killTranceiver pid signalNumber

int main(int argc, char *argv[])
{
	int sig, result;
	pid_t pid;
	pid = atoi(argv[1]);
	sig = atoi(argv[2]);
	printf("Argv[1] = %s, pid = %d\n", argv[1], pid);
	printf("Argv[2] = %s, sig = %d\n", argv[2], sig);
		
	result = kill(pid, sig);

	// signaldl fail type -> -1
	if(result == -1)
	{
		printf("Error : kill()\n");
		exit(-1);
	}
}

