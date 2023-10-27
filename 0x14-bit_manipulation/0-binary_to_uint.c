#include "main.h"
/**
 * binary_to_uint - function converts a binary number to an unsigned int.
 * @b: pointer to a string containing 0 annd 1
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int count;
	unsigned int number;

	number = 0;
	if (!b)
		return (0);
	for (count = 0; b[count] != '\0'; count++)
	{
		if (b[count] != '0' && b[count] != '1')
			return (0);
	}
	for (count = 0; b[count] != '\0'; count++)
	{
		number <<= 1;
		if (b[count] == '1')
			number = number + 1;
	}
	return (number);
}
