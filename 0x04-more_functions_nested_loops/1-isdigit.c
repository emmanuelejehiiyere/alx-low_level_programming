#include "main.h"
/**
 * _isdigit - Function for task
 * @c: Check if c is a digit
 * Return: 1 if is a digit
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
