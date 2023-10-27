#include "main.h"
/**
 * get_endianness - prog checks the endianness
 * Return: 0 if big endian, 1 if it is little
 */
int get_endianness(void)
{
	int count;
	char *emma;

	count = 1;
	emma = (char *)&count;
	return (*emma);
}

