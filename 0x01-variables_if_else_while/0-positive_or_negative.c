#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* I added a new header here for standard input and output */

/* main- point of entry, the main method */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* Let's start */
	if(n > 0)
	{
		printf("%d is positive\n",n);
	}
	else if(n == 0)
        {
                printf("%d is zero\n",n);
        }
	else
		printf("%d is is negative\n",n);
	return (0);
}
