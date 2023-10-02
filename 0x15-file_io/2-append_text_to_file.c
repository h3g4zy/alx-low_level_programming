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
    FILE *file = fopen(filename, "a");
    size_t len = strlen(text_content);
    size_t bytes_written = fwrite(text_content, (1), len, file);
    
    if (filename == NULL)
        return (-1);

    if (text_content == NULL)
        return (1);


    if (file == NULL)
        return (-1);

    fclose(file);

    if (bytes_written != len)
        return (-1);

    return (1);
}