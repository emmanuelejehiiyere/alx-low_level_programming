#include "main.h"
/**
 * *_strcpy - Function for task
 * @src: copies the string pointed to by src
 * @dest: copy to the buffer pointed to by dest
 * Return: the pointer of dest
 */
char *_strcpy(char *dest, char *src)
{
	int a, b;

	a = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for (b = 0; b < a ; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);

}
