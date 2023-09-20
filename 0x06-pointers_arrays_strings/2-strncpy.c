#include "main.h"
/**
 * _strncpy - Function for task
 * Description: a function that copies a strings
 * @dest: parameter
 * @n: Variable type int parameter
 * @src: parameter
 * Return: a pointer dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int d = 0;

	while (d < n && src[d] != '\0')
	{
		dest[d] = src[d];
		d++;
	}
	while (d < n)
	{
		dest[d] = '\0';
		d++;
	}
	return (dest);
}
