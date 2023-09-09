#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - this is the main method or the point of entry
 * Return - this will always retutn o if the program does not have any errors
 *
 */

/* I added a new header here for standard input and output */

/* main- point of entry, the main method */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Let's start */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
