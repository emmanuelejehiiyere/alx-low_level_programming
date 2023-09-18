#include "main.h"
/**
 * print_array - Function for task
 * @a: name of the array
 * @n: number of elements of the array to be printed
 * Return: void (nothing)
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
