#include "main.h"
/**
 * rot13 - Function for task
 * Description: it encodes a string using rot13
 * @s: String pointer
 * Return: String function
 */
char *rot13(char *s)
{
	int a, b;
	char data[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char dataRot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
	for (b = 0; b <= 51; b++)
	{
	if (s[a] == data[b])
	{
	s[a] = dataRot[b];
	break;
	}
	}
	}
	return (s);
}
