#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area pointed to by s
 *           with the constant byte b.
 * @s: The memory area to be filled.
 * @b: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: The pointer to the filled memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
    {
        s[i] = b;
    }

    return s;
}

