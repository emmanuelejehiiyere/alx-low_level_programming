#include "main.h"
/**
 * string_toupper - Function for task
 * Description: it changes all lowercase letters to uppercase
 * @c: parameter type char
 * Return: a string type char
 */
char *string_toupper(char *c)
{
	int d = 0;

	while (c[d] != '\0')
	{
		if (c[d] >= 'a' && c[d] <= 'z')
		{
			c[d] = c[d] - 32;
		}
		d++;
	}
	return (c);
}
