#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
	 * check_num - check - string there are digit
	 * @str: An array type string
	 * Return: Always 0 (Successful)
	 */
	int check_num(char *str)
	{
		unsigned int i;

		i = 0;
		while (i < strlen(str))
		{
			if (!isdigit(str[i]))
			{
				return (0);
			}
			i++;
		}
		return (1);
	}

	/**
	 * main - Displays the name of the program
	 * @argc: Count argument
	 * @argv: Arguments
	 * Return: Always 0 (Successful)
	 */

	int main(int argc, char *argv[])
	{
		int i;
		int str_to_int;
		int sum = 0;

		i = 1;
		while (i < argc)
		{
			if (check_num(argv[i]))
			{
				str_to_int = atoi(argv[i]);
				sum = sum + str_to_int;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		printf("%d\n", sum);
		return (0);
	}
