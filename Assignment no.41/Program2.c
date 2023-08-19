/*
Write an application which accept file name from user and count number of small characters from file.

Input : Demo.txt
Output : Number of small characters are 57.
*/

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int count_small(char *file_name)
{
    int i;
    int fd;
    int counter = 0;
    char buffer[1024];
    int read_byte_count;
    
    fd = open(file_name, O_RDONLY);

    if (fd == -1)
    {
        perror("ERROR");
        return -1;
    }

    while (read_byte_count = read(fd, buffer, 1024))
    {
        for (i = 0; i < read_byte_count; i++)
        {
            if (buffer[i] >= 'a' && buffer[i] <= 'z')
                counter++;
        }
    }
    close(fd);
    return counter;
}

int main(void)
{
    int result;
    char file_name[20];

    printf("Enter file name : ");
    scanf("%[^'\n']s", file_name);

    result = count_small(file_name);

    if (result != -1)
        printf("Number of small characters are : %d\n", result);

    return 0;
}