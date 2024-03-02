#include "main.h"
/**
 * main - This is the main function
 * @ac: The number of args 
 * @av: the List of args
*/


int main(int ac, char **av, char **env) {
 	ac = 0;
	if (av != NULL)
		av++;
	ac++;
	signal(SIGINT, my_signal_handler);
	_shell_loop(env);

	return (137);
}
