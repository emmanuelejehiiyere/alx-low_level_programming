#include "main.h"
/**
 * swap_int - Function for task
 * Description: It swaps two values of integers
 * @a: value to swap
 * @b: valur to swap
 * Return: void (nothing)
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
