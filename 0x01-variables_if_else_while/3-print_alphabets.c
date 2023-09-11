#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char emma, iyere;

	emma = 'a';

	iyere = 'A';

	while (emma <= 'z')
	{
		putchar(emma);
		emma++;
	}
	while (iyere <= 'Z')
	{
		putchar(iyere);
		iyere++;
	}
	putchar('\n');
	return (0);
}
