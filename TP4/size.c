#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    struct stat info;
    if (argc != 2)
    {
        fprintf(stderr, "usage: %s file\n", argv[0]);
        return EXIT_FAILURE;
    }
    if (stat(argv[1], &info) == -1)
    {
        fprintf(stderr, "fsize: Can’t stat %s\n", argv[1]);
        return EXIT_FAILURE;
    }
    printf("%s size: %d bytes, disk_blocks: %d\n",
           argv[1], (int)info.st_size, (int)info.st_blocks);
    return EXIT_SUCCESS;
}