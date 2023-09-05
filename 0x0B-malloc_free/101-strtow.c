#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits a string into words
 * @str: string
 * Return: pointer  string
 */

char **strtow(char *str)
{
int i;
int j, k, word_count;
int word_length;
char **words;

if (str == NULL || *str == '\0')
return (NULL);

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
word_count++;
}

words = (char **)malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
return (NULL);

for (i = 0; i < word_count; i++)
{
while (str[k] == ' ')
k++;


while (str[k + word_length] != ' ' && str[k + word_length] != '\0')
word_length++;

words[i] = (char *)malloc((word_length + 1) * sizeof(char));
if (words[i] == NULL)
{
for (j = 0; j < i; j++)
free(words[j]);
free(words);
return (NULL);
}

for (j = 0; j < word_length; j++)
words[i][j] = str[k + j];
words[i][word_length] = '\0';
k += word_length;
}

words[word_count] = NULL;

return (words);
}
