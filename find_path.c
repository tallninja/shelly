#include "main.h"

/**
 * find_path - searches in PATH the executable command file.
 * @command: Command.
 * Return: Nothing.
 */

char *find_path(char *command)
{
	char *copy = NULL, *ruta = NULL, **env = environ;
	char **directories = malloc(100), *directory = NULL;
	struct stat st;
	int count = 0, i = 0, j = 0;

	for (count = 0; env[count] != NULL; count++)
	{
		if ((_strncmp("PATH", env[count], 4)) == 0)
			break;
	}
	copy = malloc(_strlen(env[count]) + 1);
	_strcpy(copy, env[count]);
	directory = strtok(copy, ":=");
	while (directory != NULL)
	{
		directories[i] = malloc(_strlen(directory) + _strlen(command) + 2);
		_strcpy(directories[i], directory);
		_strcat(directories[i], "/");
		_strcat(directories[i], command);
		if (stat(directories[i], &st) == 0)
		{
			ruta = malloc(_strlen(directories[i]) + 1);
			_strcpy(ruta, directories[i]);
			for (j = 0; j <= i; j++)
				free(directories[j]);
			free(directories);
			free(copy);
			return (ruta);
		}
		i++;
		directory = strtok(NULL, ":");
	}
	for (j = 0; j < i; j++)
		free(directories[j]);
	free(directories);
	free(directory);
	free(copy);
	return (NULL);
}
