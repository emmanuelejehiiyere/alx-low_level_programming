#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: parameter type char
 * @needle: parameter type char
 * Return: Always 0 if Successful
 */
char *_strstr(char *haystack, char *needle)
{
	char *a;
	char *b;

	for (; *haystack != '\0'; haystack++)
	{
		*a = haystack;
		*b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}

		if (*b == '\0')
			return (haystack);
	}
	return (0);
}
