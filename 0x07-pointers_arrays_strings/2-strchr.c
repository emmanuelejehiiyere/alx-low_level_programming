#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: parameter type char
 * @c: parameter type char
 * Return: a pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	int count;

	for (count = 0; s[count] >= '\0'; count++)
	{
		if (s[count] == c)
		{
			return (&s[count]);
		}
	}
	return (0);
}
