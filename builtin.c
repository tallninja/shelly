#include "main.h"

/**
 * check_builtins - check.
 * @tokens: Array contains the tokens.
 * @string: Input.
 * @error: error.
 * Return: 2 if exit successful, 1 if other built in successful
 * or 0 if no built in.
 */

int check_builtins(char **tokens, char *string, int *error)
{
	command built_ins[] = { {"exit", exit_shell}, {"env", print_env},
				{"spaces", _null}, {NULL, NULL} };
	unsigned int i = 0;

	if (tokens[0] == NULL)
		tokens[0] = "spaces";

	for (i = 0; built_ins[i].name; i++)
	{
		if (_strcmp(built_ins[i].name, tokens[0]) == 0)
		{
			if (built_ins[i].func(tokens, string, error) == 1)
				return (1);
		}
	}
	return (0);
}

/**
 * exit_shell - exits of the shell.
 * @tokens: Array contains the tokens.
 * @string: input.
 * @error: error.
 * Return: Zero if successful.
 */

int exit_shell(char **tokens, char *string, int *error)
{
	free(tokens);
	free(string);
	exit(*error);
	return (1);
}

/**
 * print_env - prints the current environment.
 * @tokens: double pointer to tokens.
 * @string: input.
 * @error: error.
 * Return: 1 if successful.
 */

int print_env(char **tokens __attribute__((unused)),
char *string __attribute__((unused)), int *error)
{
	char **env = environ;
	unsigned int i, size = 0;

	i = 0;
	while (env[i] != NULL)
	{
		size = _strlen(env[i]);
		write(STDOUT_FILENO, env[i], size);
		write(STDOUT_FILENO, "\n", 1);
		i++;
	}

	*error = 0;
	return (1);
}

/**
 * _null - return 1.
 * @tokens: double pointer to tokens.
 * @string: input.
 * @error: error.
 * Return: 1 if successful.
 */

int _null(char **tokens __attribute__((unused)),
char *string __attribute__((unused)), int *error)
{
	*error = 0;
	return (1);
}
