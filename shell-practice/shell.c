#include "shell.h"

/**
 * shell_loop - main shell loop
 */

void shell_loop(void)
{
	char *line;
	char **line_args;
	int status;

	do {
		printf("($) ");
		line = read_line();
		line_args = split_line(line);
		status = execute(line_args);

		free(line);
		free(line_args);
	} while (status)
}

/**
 * read_line - read line from the shell
 * Return: line
 */

char *read_line(void)
{
	size_t buff_size = 0;
	char *line = NULL;
	ssize_t nread;

	nread = getline(&line, &buff_size, stdin);

	if (nread == -1)
	{
		if (feof(stdin)) /* received an EOF */
			exit(EXIT_SUCCESS)
		else
		{
			free(line);
			perror("readline");
			exit(EXIT_FAILURE);
		}
	}

	return (line);
}

/**
 * split_line - split line
 * @line: line
 * Return: an array of line tokens
 */

char **split_line(char *line)
{
	
}
