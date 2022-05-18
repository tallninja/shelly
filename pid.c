#include <stdio.h>
#include <unistd.h>

/**
 * main - get the process ID
 * Return: 0
 */
int main(void)
{
	pid_t my_pid;

	my_pid = getpid();
	printf("%u\n", my_pid);

	return (0);
}
