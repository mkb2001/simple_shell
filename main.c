#include "main.h"
/**
 * main - This is the main function
 * @ac: The number of args 
 * @av: the List of args
*/

#define MAX_INPUT_SIZE 1024

int main() {
 char command[MAX_INPUT_SIZE];

    while (1) {
        display_prompt();

        if (fgets(command, sizeof(command), stdin) == NULL) {
            printf("\nExiting simple_shell.\n");
            exit(EXIT_SUCCESS);
        }

        // Remove newline character
        command[strcspn(command, "\n")] = '\0';

        if (command[0] == '\0') {
            continue;
        }

        if (strcmp(command, "exit") == 0) {
            printf("Exiting simple_shell.\n");
            exit(EXIT_SUCCESS);
        }

        execute_command(command);
    }

    return 0;

}
