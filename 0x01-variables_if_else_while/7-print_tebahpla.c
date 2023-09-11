#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char emma;

	emma = 'z';

	while (emma >= 'a')
	{
		putchar(emma);
		emma--;
	}
	putchar('\n');
	return (0);
}
