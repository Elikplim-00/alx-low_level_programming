#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	int lastdigit = abs(n % 10)

	printf("Last digit of %d is " , n);
	
	if (lastdigit > 5)
	{
		printf("%d and is greater than 5\n", lastdigit)
	}
	else if (lastdigit = 0)
	{
		printf("%d and is 0\n", lastdigit)
	}
	else
	{
		printf("%d and is less tan 6 and not 0\m", lastdigit)
	}
	return (0);
}
