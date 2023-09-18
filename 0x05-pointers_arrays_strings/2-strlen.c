#include "main.h"
/**
 * _strlen - Function for task
 * Description: returns the length of a group of char
 * @s: String
 * Return: length type int
 */
int _strlen(char *s)
{
	int var;

	var = 0;
	while (*s != '\0')
	{
		var++;
		s++;
	}

	return (var);

}
