/**
 * A process is an instance of an executing 
 * program that has a unique process ID.
 * 
 * We use getpid to get the process id. 
 * it returns an id of the calling routine 
 * 
 * The id gotten will be saved in a variable of type pid_t
 * 
 * the getppid will return a parent id of the process
 * that created that process. ie the process that called fork 
 * that created the process.
 * 
 * 
 * 
*/
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main(void)
{
    pid_t my_pid;
    pid_t my_ppid;
    my_pid = getpid();
    my_ppid = getppid();
    printf("%u\n", my_ppid);
    return (0);
}
