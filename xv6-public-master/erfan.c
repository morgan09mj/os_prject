#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"
int main(void)
{
    int pid = fork();
    if (pid == 0)
    {
        malloc(100 * sizeof(int));
        while (1)
        ;
    }
    int pid1 = fork();
    if (pid1 == 0)
    {
        malloc(50 * sizeof(int));
        while (1)
        ;
    }
    run();
    exit();
    return 0;
}