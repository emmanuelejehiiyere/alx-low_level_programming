#include "main.h"

/**
 * print_alphabet - Function for task
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char emma;

	emma = 'a';

	while (emma <= 'z')
	{
		_putchar(emma);
		emma++;
	}
	_putchar('\n');
}
