#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - creates a new child process identical to the parent
 * Return: 0
 */

int main(void)
{
	pid_t my_pid;
	pid_t child_pid = -11;

	child_pid = fork();

	if (child_pid == -1)
	{
		perror("Error: ");
		return (1);
	}

	my_pid = getpid();

	printf("My PID: %u\n", my_pid);
	printf("Child PID: %u\n\n", child_pid);

	return (0);
}
