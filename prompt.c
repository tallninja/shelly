#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints a prompt and wait for the user
 * to type sommething then print out the command
 * Return: 0
 */

int main(void)
{
	char *buff;
	size_t buff_size = 0;
	ssize_t number_of_chars_read;

	printf("$ ");
	number_of_chars_read = getline(&buff, &buff_size, stdin);	
	if (number_of_chars_read == -1)
	{
		free(buff);
		exit(EXIT_FAILURE);
	}

	printf("%s", buff);
	
	free(buff);
	return (0);	
}
