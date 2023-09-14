#include "main.h"
/**
 * print_diagonal - Function for task
 * @n: Print n times charecter \
 * Return: void (nothing)
 */
void print_diagonal(int n)
{
	int line, ch;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line = 0; line < n; line++)
		{
			for (ch = 0; ch < n; ch++)
			{
				if (ch == line)
				{
					_putchar('\\');
				}
				else if (ch < line)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
