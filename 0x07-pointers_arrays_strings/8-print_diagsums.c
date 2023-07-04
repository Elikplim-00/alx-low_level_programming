#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: The matrix as a 1D array.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	/* Calculate the sum of the main diagonal (top-left to bottom-right) */
	for (i = 0; i < size; i++)
		sum1 += a[i * size + i];

	/* Calculate the sum of the secondary diagonal (top-right to bottom-left) */
	for (i = 0; i < size; i++)
		sum2 += a[i * size + (size - 1 - i)];

	printf("%d, %d\n", sum1, sum2);
}
