#include "main.h"
/**
 * main - This is the main function
 * @ac: The number of args 
 * @av: the List of args
*/

#define MAX_INPUT_SIZE 1024

int main() {
 char *command = NULL;
 size_t n = 0;

    while (1) {
        command = _my_prompt();
        // ssize_t n = _my_getline(&command, &n, stdin);
        printf("%s", command);
        return (0);
    }
}
