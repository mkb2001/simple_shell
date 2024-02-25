#include "main.h"
/**
 * main - This is the main function
 * @ac: The number of args 
 * @av: the List of args
*/

int main(int ac, char av[])
{
    char input[MAX_SIZE];
    while (1)
    {
        printf("#cisfun$ ");
        scanf("%s\n", input);

        if (strcmp(input, " ") != 0)
        {
            printf("%s: No such directory", av[0] );
        }
     
    }
}
