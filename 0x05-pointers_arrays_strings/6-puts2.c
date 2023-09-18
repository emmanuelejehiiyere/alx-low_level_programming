#include "main.h"
/**
 * puts2 - Function for task
 * @str: The input
 * Return: void (nothing)
 */
void puts2(char *str)
{
	int a, b, o;

	char *y = str;

	a = 0;

	while (*y != '\0')
	{
		y++;
		a++;
	}
	b = a - 1;
	for (o = 0 ; o <= b ; o++)
	{
		if (o % 2 == 0)
	{
		_putchar(str[o]);
	}
	}
	_putchar('\n');

}
