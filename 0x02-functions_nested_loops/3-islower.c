#include "main.h"
/**
 * _islower - Function for task
 * @c: character to verify lowercase
 * Return: 1 if lowercase
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else
		return (0);
}
