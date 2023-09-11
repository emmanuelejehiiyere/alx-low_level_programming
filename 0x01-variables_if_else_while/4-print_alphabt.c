#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char emma;

	for (emma = 'a'; emma <= 'z'; emma++)
	{
		if (emma != 'q' && emma != 'e')
		{
			putchar(emma);
		}
	
	}
	putchar('\n');
	return (0);
}
