#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * is_space - Checks if a character is a whitespace character.
 * @c: The character to check.
 *
 * Return: 1 if the character is whitespace, 0 otherwise.
 */
int is_space(char c) {
    return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * strtow - Splits a string into words.
 * @str: The input string to be split.
 *
 * Return: A pointer to an array of strings (words) or NULL if it fails.
 */
char **strtow(char *str) {
        int i, j, k = 0, word_count = 0;
    char **words = NULL;
int word_length = 0;

    if (str == NULL || *str == '\0')
        return (NULL);


    for (i = 0; str[i] != '\0'; i++) {
        if (!is_space(str[i]) && (i == 0 || is_space(str[i - 1])))
            word_count++;
    }

    words = (char **)malloc((word_count + 1) * sizeof(char *));
    if (words == NULL)
        return (NULL);

    for (i = 0; i < word_count; i++) {
        while (is_space(str[k]))
            k++;

        
        while (!is_space(str[k + word_length]) && str[k + word_length] != '\0')
            word_length++;

        words[i] = (char *)malloc((word_length + 1) * sizeof(char));
        if (words[i] == NULL) {
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