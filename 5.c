#include <stdio.h>
#include <sys/stat.h>

int main() {
    struct stat buf;

    // Replace "hello.c" with the actual file you want to check
    if (stat("hello.c", &buf) == -1) {
        perror("stat");
        return 1;
    }

    printf("User ID:\t%ld\n", (long)buf.st_uid);
    printf("Block Size:\t%ld\n", (long)buf.st_blksize);
    printf("No. Of Blocks:\t%ld\n", (long)buf.st_blocks);
    printf("Size of Files:\t%ld\n", (long)buf.st_size);
    printf("No of Links:\t%lu\n", (unsigned long)buf.st_nlink);

    printf("Access permission is ");
    printf((buf.st_mode & S_IRUSR) ? "r" : "-");
    printf((buf.st_mode & S_IWUSR) ? "w" : "-");
    printf((buf.st_mode & S_IXUSR) ? "x" : "-");
    printf("\n");

    return 0;
}
