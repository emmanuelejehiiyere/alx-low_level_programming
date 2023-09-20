#include "main.h"
/**
 * reverse_array - Function for task
 * Description: reverse the content(s) of an array of int
 * @a: parameter type int
 * @n: is the num of elements of an array
 * Return: void (nothing)
 */
void reverse_array(int *a, int n)
{
	int d = 0;
	int e;

	for ( ; d < n--; d++)
	{
		e = a[d];
		a[d] = a[n];
		a[n] = e;
	}
}
