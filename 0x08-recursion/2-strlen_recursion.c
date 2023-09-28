#include "main.h"
/**
 * _strlen_recursion - function that returs the length of string
 * @s: string used to check the length
 * Return: The length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
