#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number.
 *
 * Return: The last digit of n.
 */
int print_last_digit(int n)
{
	unsigned int num;

	if (n < 0)
		num = -n;
	else
		num = n;

	int last_digit = num % 10;
	_putchar(last_digit + '0');

	return last_digit;
}
