#include "main.h"
/**
 * main - This is the main function
 * @ac: The number of args 
 * @av: the List of args
*/

#define MAX_INPUT_SIZE 1024

int main() {
    char input[MAX_INPUT_SIZE];

    while (1) {
        // Display prompt and wait for user input
        printf("$ ");
        if (fgets(input, MAX_INPUT_SIZE, stdin) == NULL) {
            // Handle end of file condition (Ctrl+D)
            printf("\nExiting simple_shell.\n");
            break;
        }

        // Remove newline character from input
        input[strcspn(input, "\n")] = '\0';

        // Fork a child process
        pid_t pid = fork();

        if (pid == -1) {
            perror("fork");
            exit(EXIT_FAILURE);
        } else if (pid == 0) {
            // Child process: execute the command
            if (execlp(input, input, (char *)NULL) == -1) {
                // Print error if command is not found
                perror("simple_shell");
                exit(EXIT_FAILURE);
            }
        } else {
            // Parent process: wait for the child to finish
            int status;
            if (waitpid(pid, &status, 0) == -1) {
                perror("waitpid");
                exit(EXIT_FAILURE);
            }
        }
    }

    return 0;
}
