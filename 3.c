#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    int status=1000;
    int x = 1;
    int pid = fork(); 

    if (pid < 0) {
        perror("fork");
        return 1;
    } else if (pid == 0) {
        printf("Child process: %d\n", ++x);
    } else {
        wait(&status);
        printf("Parent process: %d\n", --x);
    }

    return 0;
}




