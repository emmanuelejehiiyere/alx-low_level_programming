#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars
 * @size: size of array type iny
 * @c: char to be assigned
 * Return: pointer to array, NULL (fail)
 */

char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int count;

	string = malloc(sizeof(char) * size);

	if (size == 0 || string == NULL)
		return (NULL);

	for (count = 0; count < size; count++)
		string[count] = c;
	return (string);
}
