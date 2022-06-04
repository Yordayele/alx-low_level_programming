#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * Description: main-checks the sign of a number
 *
 * Return: returns 0 if everything is ok
 *
 **/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
