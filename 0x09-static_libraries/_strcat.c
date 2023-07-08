#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string to append to.
 * @src: The source string to append.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i;

	/* Get the length of dest */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Append src to dest */
	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len++] = src[i];

	/* Add null character at the end */
	dest[dest_len] = '\0';

	return dest;
}

