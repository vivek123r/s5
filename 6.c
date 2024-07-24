                                                                                     a.c                                                                                               #include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
int main()
  {
   int pid=fork();
   printf("process created");
        execl("/bin/date", "date", NULL);
   printf("execl executed");    
    return(0);
  }


execv systemcall
execsys.c

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    printf("Main pgm executing\n");
    char *args[] = {"Hello", "C", "Programming", NULL};
    execv("./hello", args);
    printf("Back to main pgm");
    return 0;
}

hello.c

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    printf(" Hello.c executing\n");
    printf("First content of passed array is %s\n", argv[0]);
    return 0;
}
Execution format
Gcc –o execsys execsys.c
Gcc –o hello hello.c
./execsys

