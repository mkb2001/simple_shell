#include "main.h"
/**
 * main - This is the main function
 * @ac: The number of args 
 * @av: the List of args
*/

#define MAX_INPUT_SIZE 1024

int main() {
 char *command;

    while (1) {
        command = _my_prompt();
        printf("%s", command);
        return (0);
    }
}
