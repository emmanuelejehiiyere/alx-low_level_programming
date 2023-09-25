#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: parameter type int
 * @size: parameter type int
 * Return: Always 0 if Successful
 */
void print_diagsums(int *a, int size)
{
	int sum0, sum1, i;

	sum0 = 0;
	sum1 = 0;

	while (i < size)
	{
		sum0 = sum0 + a[i * size + i];
		i++;
	}
	for (i = size - 1; i >= 0; i--)
	{
		sum1 = sum1 + a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sum0, sum1);
}
