#include "main.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all the arguments
 * @ac: parameter type int
 * @av: double pointer array
 * Return: Always 0 (Successful)
 */
char *argstostr(int ac, char **av)
{
	int i, j, r = 0, len = 0;
	char *string;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	len = len + ac;
	string = malloc(sizeof(char) * len + 1);
	if (string == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
		string[r] = av[i][j];
		r++;
	}
	if (string[r] == '\0')
	{
		string[r++] = '\n';
	}
	}
	return (string);
}
