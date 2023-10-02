#include "main.h"
/**
 * _memcpy -  function that copies memory area
 * @dest: memory storage
 * @src: memoty cp
 * @n: number bytes from memory
 * Return: a pointer dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int count, takeN;

	takeN = n;

	for (count = 0; count < takeN; count++)
	{
		dest[count] = src[count];
		n--;
	}
	return (dest);
}
