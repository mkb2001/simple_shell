#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char *input = NULL;
    size_t len = 0;
    printf("$ ");
    size_t res = getline(&input, &len, stdin);
    
    if (res != -1)
    {
        printf("%s", input);
    }

}