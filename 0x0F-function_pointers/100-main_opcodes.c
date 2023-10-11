#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Successful)
 */
int main(int argc, char *argv[])
{
	int bytes, count;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (count = 0; count < bytes; count++)
	{
		if (count == bytes - 1)
		{
			printf("%02hhx\n", array[count]);
			break;
		}
		printf("%02hhx ", array[count]);
	}
	return (0);
}
