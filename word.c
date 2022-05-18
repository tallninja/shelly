#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - splits a string and returns an array of each
 * word of the string
 * Return: 0
 */

int main(void)
{
	char str[] = "The quick brown fox";
	char *token = strtok(str, " ");

	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, " ");
	}

	return (0);
}
