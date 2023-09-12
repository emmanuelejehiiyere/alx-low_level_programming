#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int emma;

	for (emma = 0; emma < 10; emma++)
	{
		putchar(emma + '0');

		if (emma < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
