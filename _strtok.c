#include "main.h"

/**
 * _strtok - Split the string in tokens.
 * @tokens: Array contains the tokens.
 * @string: Entered line.
 * @delim: chars to separate the string
 * Return: Array with tokens.
 */

char **_strtok(char **tokens, char *string, char *delim)
{
	char *token = NULL;
	int i = 0;

	tokens = malloc(5000 * sizeof(char *));
	if (tokens == NULL)
	{
		free(tokens);
		perror("./shell5");
		return (NULL);
	}

	token = strtok(string, delim);
	while (token != NULL)
	{
		tokens[i] = token;
		i++;
		token = strtok(NULL, delim);
	}
	tokens[i] = NULL;

	free(token);
	return (tokens);
}
