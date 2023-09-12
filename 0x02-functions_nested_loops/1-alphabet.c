#include "main.h"
/**
 * main - Entry point
 *
 * Return: void
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
