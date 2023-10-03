#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: input
 * @s2: input
 * Return: concatenate of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int count, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	count = j = 0;
	while (s1[count] != '\0')
		count++;
	while (s2[j] != '\0')
		j++;
	conct = malloc(sizeof(char) * (count + j + 1));
	if (conct == NULL)
		return (NULL);
	count = j = 0;
	while (s1[count] != '\0')
	{
		conct[count] = s1[count];
		count++;
	}
	while (s2[j] != '\0')
	{
		conct[count] = s2[j];
		count++, j++;
	}
	conct[count] = '\0';
	return (conct);
}
