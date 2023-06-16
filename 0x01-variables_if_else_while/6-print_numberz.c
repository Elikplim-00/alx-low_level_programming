#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char digits[] = "0123456789\n";
	
	int i;
	for (i = 0; i < 11; i++)
	{
		putchar(digits[i]);
	}
	return (0);
}
