#include "main.h"

/**
 * main - interactive command line interpreter
 * Return: Zero if successful.
 */

int main(void)
{
	char *string, **tokens;
	size_t n = 0;
	ssize_t gl, fd = 0;
	int status = 0, tty = 1, check_b_ins, error = 0;

	isatty(STDIN_FILENO) == 0 ? tty = 0 : tty;
	do {
		string = NULL, tokens = NULL, n = 0, status = 0;
		tty == 1 ? fd = write(STDOUT_FILENO, "($) ", 4) : tty;
		if (fd == -1)
			dprintf(STDERR_FILENO, "Can't write the stdout");
		gl = getline(&string, &n, stdin);
		if (gl == -1)
		{	free(string);
			if (feof(stdin))
				return (error);
			else
				return (EXIT_FAILURE); }
		tokens = _strtok(tokens, string, " \t\n\"\'");
		check_b_ins = check_builtins(tokens, string, &error);
		if (check_b_ins == 1)
			status = 1;
		if (status == 0)
			check_execution(tokens, string, &error);
		else
			free(tokens);
		free(string);
	} while (1);
	free(tokens);
	return (0);
}
