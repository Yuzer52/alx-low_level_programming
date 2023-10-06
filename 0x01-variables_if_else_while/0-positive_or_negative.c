#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - It will Prints a random number and states whether
 *        it is positive, negative, or zero.
 *
 *Returns: 0.
*/
int main(void)
{
	int num;

	srand(time(0));
	num = rand() - RAND_MAX / 2;

	if (num > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
