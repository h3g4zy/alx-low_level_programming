#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * read_textfile - reads text from a file and prints it
  * @filename: name of file to read
  * @letters: number of letters to read
  *
  * Return: number of bytes read
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fo;
ssize_t bytes;
char buf[READ_BUF_SIZE * 8];

if (!filename || !letters)
	return (0);
fo = open(filename, O_RDONLY);
if (fo == -1)
	return (0);
bytes = read(fo, &buf[0], letters);
bytes = write(STDOUT_FILENO, &buf[0], bytes);
close(fo);
return (bytes);
}
