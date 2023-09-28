#include "main.h"
/**
 * _pow_recursion - function that returns the value of x with the  power of y
 * @x: value of a given number
 * @y: the power of a given num
 * Return: the result of x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, (y - 1)));
}
