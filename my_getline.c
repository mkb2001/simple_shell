#include "main.h"

ssize_t _my_getline (char **command, size_t *number, FILE *stream)
{
            ssize_t i = 0;
        int size = 80;
        char *buffer;
        int c;

	if (number == NULL || stream == NULL)
	{
		;
	}
        buffer = (char *)malloc(sizeof(char) * size);
        if (buffer == NULL)
        {
                perror("malloc");
                return (-1);
        }

        c = getchar();
        while (c != EOF && c != '\n')
        {
                buffer[i] = c;
                i++;
                if (i >= size)
                {
                        size += size;
                        buffer = realloc(buffer, size);
                        if (buffer == NULL)
                        {
                                perror("./hsh");
                                return(-1);
                        }
                }
                c = getchar();
        }
        buffer[i] = '\0';

        *command = buffer;
        if(*command == NULL)
        {
                perror("./hsh");
                free(buffer);
                return (-1);
        }

        return (i);
}