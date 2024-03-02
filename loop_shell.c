#include "main.h"

void _shell_loop(char **env)
{
		pid_t my_pid;
	int wstatus;
	char *reg_command = NULL;
	struct stat st;
	char **ptr = NULL;

	do {
		ptr = _tokens(env);
		if (ptr == NULL)
		{
			_free(ptr);
			exit(EXIT_FAILURE);
		}
		reg_command = _handle_path(ptr[0]);
		if (reg_command == NULL)
		{
			free(reg_command);
			_free(ptr);
			_shell_loop(env);
		}
		if (stat(reg_command, &st) == 0)
		{
			my_pid = fork();
			if (my_pid == -1)
			{
				free(reg_command);
				_free(ptr);
				exit(EXIT_FAILURE);
			}
			else if (my_pid == 0)
				process(reg_command, st, ptr);
		}
		else
			perror("./hsh");
		_free(ptr);

	} while (waitpid(my_pid, &wstatus, WUNTRACED));

	_free(ptr);
}
