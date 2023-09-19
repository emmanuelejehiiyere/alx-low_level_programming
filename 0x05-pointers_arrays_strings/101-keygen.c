#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Function for task
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int password[100];
	int count, sum, num;

	sum = 0;

	srand(time(NULL));

	for (count = 0; count < 100; count++)
	{
		password[count] = rand() % 78;
		sum = sum + (password[count] + '0');
		putchar(password[count] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			num = 2772 - sum - '0';
			sum = sum + num;
			putchar(num + '0');
			break;
		}
	}

	return (0);
}
