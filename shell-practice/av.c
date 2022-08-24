#include <stdio.h>

/**
 * main - prints all argument without using argc
 * Return: 0
 */

int main(int argc, char **argv)
{
	while (*argv)
	{
		printf("%s\n", *argv);
		argv++;
	}

	return (0);
}
