#include "main.h"
/**
 * _isalpha - checks character
 * @c: The character to check
 * Return: 1 for all
 */
int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
