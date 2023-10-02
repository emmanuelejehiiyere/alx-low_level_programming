#include "main.h"
/**
 * _puts - Function for task
 * Description: print a string
 * @str: string to be printed
 * Return: void (nothing)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
