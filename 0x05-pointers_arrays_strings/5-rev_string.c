#include "main.h"
/**
 * rev_string - Function for task
 * @s: String
 * Return: void (nothing)
 */
void rev_string(char *s)
{
	char reverse = s[0];
	int i, j;

	i = 0;

	while (s[i] != '\0')
		i++;
	for (j = 0; j < i; j++)
	{
		i--;
		reverse = s[j];
		s[j] = s[i];
		s[i] = reverse;
	}
}
