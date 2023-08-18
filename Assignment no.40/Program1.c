/*
Write an application which accept file name form user and open that file in read mode.

Input : Demo.txt
Output : File opned successfully.
*/

#include <stdio.h>
#include <fcntl.h>

int main(void)
{
    int fd;
    char file_name[20];

    printf("Enter file name : ");
    scanf("%[^'\n']s", file_name);

    fd = open(file_name, O_RDONLY);

    if (fd == -1)
        perror("ERROR");
    else
        printf("File opened successfully.\n");

    return 0;
}