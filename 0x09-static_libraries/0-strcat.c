#include "main.h"
/**
 * _strcat - Fuction for task
 * Description: a function that concatenates two strings
 * @dest: get appended
 * @src: appends dest
 * Return: a pointer dest
 */
char *_strcat(char *dest, char *src)
{
	int d = 0;
	int s = 0;

	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}
