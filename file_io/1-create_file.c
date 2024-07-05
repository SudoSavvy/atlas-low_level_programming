#include <fcntl.h>   /* For open, O_CREAT, O_WRONLY, O_TRUNC */
#include <unistd.h>  /* For write, close */
#include <sys/stat.h> /* For S_IRUSR, S_IWUSR */
#include <stdio.h>   /* For perror */
#include <stdlib.h>  /* For malloc, free */

/**
 * create_file - Creates a file with specific permissions and writes content to it
 * @filename: The name of the file to create
 * @text_content: A NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
    int fd, bytes_written, len = 0;

    /* Check if filename is NULL */
    if (filename == NULL)
        return (-1);

    /* Check if text_content is NULL */
    if (text_content == NULL)
        text_content = "";

    /* Calculate length of text_content */
    while (text_content[len])
        len++;

    /* Open the file with specific permissions */
    fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
    if (fd == -1)
    {
        perror("Error opening file");
        return (-1);
    }

    /* Write content to the file */
    bytes_written = write(fd, text_content, len);
    if (bytes_written == -1)
    {
        perror("Error writing to file");
        close(fd);
        return (-1);
    }

    /* Close the file descriptor */
    close(fd);
    return (1);
}

/* Test the function */
int main(int argc, char *argv[])
{
    int result;

    /* Check if the correct number of arguments is provided */
    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return (1);
    }

    /* Call create_file function and handle result */
    result = create_file(argv[1], "Wait !\nYou should not be able to see this !");
    if (result == 1)
    {
        printf("File created successfully.\n");
    }
    else
    {
        printf("Failed to create file.\n");
    }

    return (0);
}
