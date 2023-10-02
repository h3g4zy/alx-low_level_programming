#include "main.h"

/**
  * create_file - function that creates a file.
  * @filename: name of file to create
  * @text_content: text of the file
  *
  * Return: 1 on success, -1 on failure
  */

int create_file(const char *filename, char *text_content)
{
int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

if (filename == NULL)
    return (-1);

if (fd == -1)
    return (-1);

if (text_content != NULL)
{
size_t len = strlen(text_content);
ssize_t bytes_written = write(fd, text_content, len);

if (bytes_written == -1)
{
close(fd);
return (-1);
}
}

close(fd);
return (1);
}
