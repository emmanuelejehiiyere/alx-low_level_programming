#include "main.h"
/**
 * more_numbers - Function for task
 * NB: Prints numbers from 0-14 in 10 line
 * Return: void (nothing)
 */
void more_numbers(void)
{
	int line, num;
	
	for (line = 0; line < 10; line++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num >= 10)
			{
				_putchar(num / 10 + '0');
			}
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
