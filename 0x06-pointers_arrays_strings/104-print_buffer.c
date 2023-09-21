#include "main.h"
/**
 * print_buffer - Function for task
 * Description: It prints a buffer
 * @b: parameter char
 * @size: parameter prints the content
 * Return: void (nothing)
 */
void print_buffer(char *b, int size)
{
	int a, e, c, d;

	a = 0;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (a < size)
	{
		e = size - a < 10 ? size - a : 10;
		printf("%08x: ", a);
		for (c = 0; c <= 9; c++)
		{
			if (c < e)
			{
				printf("%02x", *(b + a + c));
			}
			else
				printf(" ");
			if (c % 2)
				printf(" ");
		}
		for (c = 0; c < e; c++)
		{
			d = *(b + a + c);
			if (d < 32 || c > 132)
				d = '.';
			printf("%c", d);
		}
		printf("\n");
		a = a + 10;
	}
}
