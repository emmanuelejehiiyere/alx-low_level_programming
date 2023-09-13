#include "main.h"
/**
 * print_alphabet_x10 - Function for task
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char emma;

	int iyere;

	for (iyere = 0; iyere <= 9; iyere++)
	{
		for (emma = 'a'; emma <= 'z'; emma++)
		{
			_putchar(emma);
		}
		_putchar('\n');
	}
}
