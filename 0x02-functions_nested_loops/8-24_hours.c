#include "main.h"
/**
 * jack_bauer - Function for task
 * NB: Prints every minute of Jack's day
 * Return: ALways 0 (Success);
 */
void jack_bauer(void)
{
	int j, a, c, k;

	for (j = 0; j <= 2; j++)
	{
		for (a = 0; a <= 9; a++)
		{
			if ((j <= 2 && a <= 3) || (j <= 1 && a <= 9))
			{
				for (c = 0; c <= 5; c++)
				{
					for (k = 0; k <= 9; k++)
					{
						_putchar(j + '0');
						_putchar(a + '0');
						_putchar(58);
						_putchar(c + '0');
						_putchar(k + '0');
						_putchar('\n');
					}
				}
			}
		}
	}


}
