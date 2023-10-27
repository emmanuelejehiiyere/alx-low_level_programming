#include "main.h"
/**
 * flip_bits - counts the num of bits to change
 * @n: first number parameter
 * @m: second number parameter
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int cnt;
	unsigned long int ex = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		cnt = ex >> i;
		if (cnt & 1)
			count++;
	}

	return (count);
}
