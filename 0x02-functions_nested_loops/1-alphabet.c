#include "main.h"
/**
 * To_print_alphabet - Make the alphabet
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
