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
    command[strcspn(command, "\n")] = '\0';
    return (command);

}
