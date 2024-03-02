#include "main.h"

ssize_t _my_getline (char **command, size_t *number, FILE *stream)
{
    ssize_t i = 0; /* the index */

    int size = 80; /* the max number of characters */
    char *buffer;
    int c;

    if (number == NULL || stream == NULL)
    {

    }

    buffer = malloc(sizeof(char) * size);

    if ( buffer == NULL)
    {
        perror("Sorry");
        exit(98);
    }
    c= getchar();
    while ( c != EOF && c != '\n')
    {
        buffer[i] = c;
        i++;
        if (i >= size)
        {
            size += size;
            buffer = realloc(buffer, size);
            if (buffer == NULL)
            {
                perror("realloc");
                return(-1);
            }

        }
        c= getchar();
    }
    buffer[i] = '\0';
    *command = buffer;

    if (*command == NULL)
    {
        perror("Empty buffer");
        free(buffer);
        return (-1);
    }
    return (i);
}