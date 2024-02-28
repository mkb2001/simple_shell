#include "main.h"

/**
 * execute_command - Entry Point
 * @command: command to be used.
 * Return: fork ID
*/
void execute_command(char *command) {
    pid_t pid = fork();

    if (pid == 0) {
        if (execlp(command, command, NULL) == -1) {
            perror("simple_shell");
            exit(EXIT_FAILURE);
        }
    } else if (pid < 0) {
        perror("simple_shell");
        exit(EXIT_FAILURE);
    } else {
        int status;
        waitpid(pid, &status, 0);

        if (WIFEXITED(status) && WEXITSTATUS(status) == 127) {
            printf("./shell: %s: No such file or directory\n", command);
        }
    }
}

