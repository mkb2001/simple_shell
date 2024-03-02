#include "main.h"
void my_signal_handler(int sig)
{
    exit(sig);
}