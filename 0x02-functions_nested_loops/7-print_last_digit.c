#include "main.h"
/**
 * print_last_digit - Function for task
 * @c: Compute last digit
 * Return: The last digit
 */
int print_last_digit(int c)
{
	int last_digit;

	last_digit = c % 10;

	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
