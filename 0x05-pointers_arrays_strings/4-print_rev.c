#include "main.h"
/**
 * print_rev - Functioction for task
 * Description: Prints a string in reverse
 * @s: string to be printed
 * Return: void (nothing)
 */
void print_rev(char *s)
{
	int k, i;

	k = 0;

	while (*s != '\0')
	{
		k++;
		s++;
	}
	s--;
	for (i = k; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
}
