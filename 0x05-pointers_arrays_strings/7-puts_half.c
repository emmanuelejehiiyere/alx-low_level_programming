#include "main.h"
/**
 * puts_half - Function for task
 * @str: The inpute
 * Return: void (nothing)
 */
void puts_half(char *str)
{
	int a, n, c;

	c = 0;

	for (a = 0; str[a] != '\0'; a++)
		c++;
	n = (c / 2);

	if ((c % 2) == 1)
		n = ((c + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
