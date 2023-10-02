#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL-terminated string to add at the end of the file.
 *
 * Return: (1) on success, (-(1)) on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
FILE *file;
size_t len;
size_t bytes_written;

if (filename == NULL || text_content == NULL)
return (filename == NULL) ? -1 : 1;

file = fopen(filename, "a");
if (file == NULL)
return -1;

len = strlen(text_content);
bytes_written = fwrite(text_content, 1, len, file);

fclose(file);

return (bytes_written == len) ? 1 : -1;
}