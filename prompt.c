#include "main.h"

/**
 * 
*/

char *_my_prompt()
{
    char *command = NULL;
    size_t n = 0;
    int _terminal = 0;

    _terminal = isatty(fileno(stdin));

    if(_terminal)
    {
        write(STDOUT_FILENO, "$ ", 2);
    }
    if (_my_getline(&command, &n, stdin) == -1)
    {
        free(command);
        exit(EXIT_SUCCESS);
    }
    command[strcspn(command, "\n")] = '\0';
    if (strcmp(command, "env") == 0 || strcmp(command, "printenv") == 0)
    {
        my_printenv();
    }
    if (strcmp(command, "exit") == 0)
    {
        exit(EXIT_SUCCESS);
    }
    
    return (command);

}


