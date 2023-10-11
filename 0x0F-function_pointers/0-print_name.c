#include "function_pointers.h"
/**
 * print_name - print name using pointer
 * @name: string to be added
 * @f: pointer to function
 * Return: void nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
