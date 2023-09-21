#include "main.h"
/**
 * cap_string - Function for task
 * Description: it capitalizes all word of a string
 * @n: parameter that I added
 * Return: value type char
 */
char *cap_string(char *n)
{
	int i = 0;

	while (n[i])
	{
		while (!(n[i] >= 'a' && n[i] <= 'z'))
		{
			i++;
		}
		if (n[i - 1] ==  ' ' ||
				n[i - 1] == '\t' ||
				n[i - 1] == '\n' ||
				n[i - 1] == ',' ||
				n[i - 1] == ';' ||
				n[i - 1] == '.' ||
				n[i - 1] == '!' ||
				n[i - 1] == '?' ||
				n[i - 1] == '"' ||
				n[i - 1] == '(' ||
				n[i - 1] == ')' ||
				n[i - 1] == '{' ||
				n[i - 1] == '}' ||
				i == 0)
		{
			n[i] = n[i] - 32;
		}
		i++;
	}
	return (n);
}
