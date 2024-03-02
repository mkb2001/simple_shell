#ifndef MAIN_H_
#define MAIN_H_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <limits.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ctype.h>
void process(char *reg_command, struct stat st, char **ptr);
void _shell_loop(char **env);
char **_tokens(char **env);
void execute_command(char *command);
int _strlen(char *);
int _strcmp(char *, char *);
void null_checker(char *s);
int _strcspsn(char *, char);
void _free(char **ptr);
char *_my_prompt(char **env);
char *_handle_path(char *command);
void my_signal_handler(int sig);
void _my_printenv(char **env);
ssize_t _my_getline (char **command, size_t *number, FILE *stream);
#define MAX_SIZE 1024
#endif
