#include <stdio.h>
#include <unistd.h>

/**
 * main - execute a command using execve system call
 * man 2 execve
 * Return: 0
 */

int main(void)
{
	char *command[] = {"/bin/ls", "-l", "/usr/", NULL};

	if (execve(command[0], command, NULL) == -1)
		perror("Error: ");

	return (0);
}
