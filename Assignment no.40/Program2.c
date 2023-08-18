/*
Write an application which accept file name form user and create that file.

Input : Demo.txt
Output : File created successfully.
*/

#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>

int main(void)
{
    int fd;
    char file_name[20];

    printf("Enter file name : ");
    scanf("%[^'\n']s", file_name);

    fd = creat(file_name, S_IRWXU);

    if (fd == -1)
        perror("ERROR");
    else
        printf("File created successfully.\n");

    return 0;
}