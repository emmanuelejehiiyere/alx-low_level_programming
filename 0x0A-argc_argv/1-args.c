#include "main.h"
/**
 * main - a program that prints all arguments it receives.
 * @argc: number of arguments parameter
 * @argv: array of arguments parameter
 * Return: Always 0 (Successful)
 */
int main(int argc, char *argv[])
{
(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
