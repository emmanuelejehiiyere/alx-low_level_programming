#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte
 * @s: Address of the memory to be filled
 * @b: Value desired parameter
 * @n: bytes of the memory area
 * Return: a pointer to the memory areas
 */
char *_memset(char *s, char b, unsigned int n)
{
	int count;

	for (count = 0; n > 0; count++)
	{
		s[count] = b;
		n--;
	}
	return (s);
}
