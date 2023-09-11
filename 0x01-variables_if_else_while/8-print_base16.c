#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char emma;

	int iyere;

	emma = 'a';

	for (iyere = 0; iyere < 10; iyere++)
	{
		putchar(iyere + '0');
	}

	while (emma <= 'f')
	{
		putchar(emma);
		emma++;
	}
	putchar('\n');
	return (0);
}
