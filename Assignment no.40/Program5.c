/*
Write an application which accept file name from user and one string from user. Write that string at the end of file.

Input : Demo.txt
        Hello World
Output : Write_Hello_World_at_the_end_of_the_Demo.txt_file.
*/

#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>

int main(void)
{
    int fd;
    char str[20];
    char file_name[20];

    printf("Enter file name : ");
    scanf("%[^'\n']s", file_name);

    printf("Enter string : ");
    scanf(" %[^'\n']s", str);

    fd = open(file_name, O_WRONLY | O_APPEND);

    if (fd == -1)
    {
        perror("ERROR");
        exit(1);
    }

    write(fd, str, strlen(str));

    close(fd);

    return 0;
}