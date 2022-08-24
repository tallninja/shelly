#include "shell.h"

/**
 * main - run the main loop of the shell
 * @argc: argc
 * @argv: argv
 * Return: 0 if exited successfully and 1 otherwise
 */

int main(int argc, char **argv)
{
	shell_loop();

	return (EXIT_SUCCESS)
}
