#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout.
 * @str: Pointer to the string.
 */
void _puts(char *str)
{
	/* Iterate through the string and print each character */
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	/* Print a new line character */
	_putchar('\n');
}
