#include "main.h"
/**
 * _pow - func calculates (base ^ power)
 * @base: base of the exponent
 * @power: power of the exponent
 *
 * Return: value of base
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int number;
	unsigned int count;

	number = 1;
	for (count = 1; count <= power; count++)
		number = number * base;
	return (number);
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divicor, chk;
	char fg;

	fg = 0;
	divicor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divicor != 0)
	{
		chk = n & divicor;
		if (chk == divicor)
		{
			fg = 1;
			_putchar('1');
		}
		else if (fg == 1 || divicor == 1)
		{
			_putchar('0');
		}
		divicor >>= 1;
	}
}
