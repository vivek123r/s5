#include <stdio.h>                                                                                a.c                                                                                               #include <stdio.h>
#include <unistd.h>
int main()
{
    int x = 1;
    int pid=fork();
    if (pid == 0)
        printf("Process id of Child is %d\n", getpid());
    else
        printf("Process id of parent is %d\n", getppid());
    return 0;
}
