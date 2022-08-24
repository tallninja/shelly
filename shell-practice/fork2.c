#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	pid_t my_pid;
	pid_t child_pid;

	child_pid = fork();

	if (child_pid == -1)
	{
		perror("Error: ");
		return (1);
	}

	my_pid = getpid();

	if (child_pid == 0)
		printf("(%u) Noooooooo000!\n", my_pid);

	else
		printf("(%u) I'm your father...\n", my_pid);

	return (0);
}
