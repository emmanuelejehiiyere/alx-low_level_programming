#include "main.h"
/**
 * set_bit - prog sets the value of a bit to 1 at a given index.
 * @n: number to set
 * @index: index parameter
 * Return: 1 if success, or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int thisBit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	thisBitit = 1 << index;
	*n = *n | thisBit;
	return (1);
}
