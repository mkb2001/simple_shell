#include "main.h"

/**
 * 
*/

char *_my_prompt(char **env)
{
   	FILE *stream = stdin;
	char *command = NULL;
	size_t n = 0;
	int _terminal = 0;

	_terminal = isatty(fileno(stream));

	if (_terminal)
		write(STDOUT_FILENO, "$ ", 2);
	if (getline(&command, &n, stream) == -1)
	{
		free(command);
		exit(EXIT_SUCCESS);
	}
	command[strcspn(command, "\n")] = '\0';
	if (strcmp(command, "env") == 0 || strcmp(command, "printenv") == 0)
		_my_printenv(env);
	if (strcmp(command, "exit") == 0)
		exit(EXIT_SUCCESS);
	return (command);

}


