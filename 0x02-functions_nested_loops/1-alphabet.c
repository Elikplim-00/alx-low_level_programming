#include "main.h"
/**
 *main - Entry point
 *
 *print_alphabet: print all alphabet in lowercase
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
