#include"main.h"
/**
 * get_bit - prog returns the value of a bit
 * @n: number to check bits parameter
 * @index: index
 * Return: value of the bit, or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divicor;
	unsigned long int chk;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divicor = 1 << index;
	chk = n & divicor;
	if (chk == divicor)
		return (1);
	return (0);
}
