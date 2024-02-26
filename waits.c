#include <cstdio>
int main(void)
{
    char input[1024];
    char len = 0;
    printf("$ ");
    ssize_t res = getline(&input, &len, stdin);
    
    if (res != -1)
    {
        printf("%s", input);
    }

}