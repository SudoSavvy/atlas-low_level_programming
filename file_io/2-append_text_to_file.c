#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

/**
* append_text_to_file - Appends text at the end of a file
* @filename: The name of the file to append to
* @text_content: A NULL terminated string to add at the end of the file
*
* Return: 1 on success and -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd, len = 0;
ssize_t bytes_written;

/* Check if filename is NULL */
if (filename == NULL)
return (-1);

/* Check if text_content is NULL or empty */
if (text_content == NULL || text_content[0] == '\0')
return (1);

/* Calculate length of text_content */
while (text_content[len])
len++;

/* Open the file for appending */
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
{
perror("Error opening file for append");
return (-1);
}

/* Append text_content to the file */
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
