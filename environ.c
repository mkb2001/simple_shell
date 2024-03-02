#include "main.h"


void printenv(char **env)
{
	int i = 0;

	for (i = 0; env[i] != NULL; i++)
		write(STDOUT_FILENO, env[i], _strlen(env[i]));
	write(STDOUT_FILENO, "\n", 1);

}
