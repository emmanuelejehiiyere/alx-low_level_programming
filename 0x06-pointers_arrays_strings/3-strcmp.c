#include "main.h"
/**
 * _strcmp - Function for task
 * Description: It compares two strings
 * @s1: parameter type char
 * @s2: parameter type char
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int d = 0;

	while (s2[d] != '\0' && s2[d] != '\0')
	{
		if (s1[d] != s2[d])
		{
			return (s1[d] - s2[d]);
		}
		d++;
	}
	return (0);
}
