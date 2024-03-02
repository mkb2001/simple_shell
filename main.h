#ifndef MAIN_H_
#define MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

void display_prompt();
void execute_command(char *command);
char *_my_prompt();
ssize_t _my_getline (char **command, size_t *number, FILE *stream);
#define MAX_SIZE 1024
#endif
