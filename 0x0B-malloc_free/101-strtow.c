#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int count_words(char *str)
{
    int count = 0;
    bool is_word = false;

    while (*str != '\0')
    {
        if (*str == ' ' || *str == '\t' || *str == '\n')
        {
            is_word = false;
        }
        else if (!is_word)
        {
            is_word = true;
            count++;
        }
        str++;
    }

    return count;
}

char **strtow(char *str)
{
    if (str == NULL || *str == '\0')
        return NULL;

    int words = count_words(str);
    char **word_array = (char **)malloc(sizeof(char *) * (words + 1));
    if (word_array == NULL)
        return NULL;

    int i, j;
    bool is_word = false;
    int word_start = 0;
    int word_len = 0;

    int k;
    for (i = 0, j = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        {
            if (is_word)
            {
                word_array[j] = (char *)malloc(sizeof(char) * (word_len + 1));
                if (word_array[j] == NULL)
                {
                    for (k = 0; k < j; k++)
                        free(word_array[k]);
                    free(word_array);
                    return NULL;
                }

                for (k = 0; k < word_len; k++)
                    word_array[j][k] = str[word_start + k];
                word_array[j][word_len] = '\0';

                j++;
                is_word = false;
            }
        }
        else if (!is_word)
        {
            is_word = true;
            word_start = i;
            word_len = 1;
        }
        else
        {
            word_len++;
        }
    }

    if (is_word)
    {
        word_array[j] = (char *)malloc(sizeof(char) * (word_len + 1));
        if (word_array[j] == NULL)
        {
            for (k = 0; k < j; k++)
                free(word_array[k]);
            free(word_array);
            return NULL;
        }

        for (k = 0; k < word_len; k++)
            word_array[j][k] = str[word_start + k];
        word_array[j][word_len] = '\0';

        j++;
    }

    word_array[j] = NULL;

    return word_array;
}

