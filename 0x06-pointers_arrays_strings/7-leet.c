#include "main.h"
#include <stdio.h>
/**
  * leet - main function
  * @s: parameter
  * Return: value of s type char
 */

char *leet(char *s)
{
	int i, e;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
	for (e = 0; e <= 9; e++)
	{
	if (s[i] == s1[e])
	{
	s[i] = s2[e];
	}
	}
	}
	return (s);
}
