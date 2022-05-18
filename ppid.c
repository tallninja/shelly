#include <stdio.h>
#include <unistd.h>

/**
 * main - get the parent process ID. PPID is
 * always the same after each execution
 * Return: 0
 */

int main(void)
{
	pid_t myppid;

	myppid = getppid();
	printf("%u\n", myppid);

	return (0);
}
