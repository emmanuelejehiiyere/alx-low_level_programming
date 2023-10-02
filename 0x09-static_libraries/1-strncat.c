#include "main.h"
/**
 * _strncat - Function for task
 * Description: a function that concatenates two strings
 * @dest: get appended
 * @n: Variable type int parameter
 * @src: appends dest
 * Return: a pointer dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int d = 0;
	int s = 0;

	while (dest[d] != '\0')
	{
		d++;
	}
	while (s < n && src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}
