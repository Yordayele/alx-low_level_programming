#include <stdio.h>
/**
 * main - Causes an infinite loop.
 * return: 0.
 */
int main(void)
{
	int i;

	printf("displaying infinite loop:\n");
	i = 0;
	while (i < 10)
	{
		putchar(i);
	}
	printf("infinite loop avoided\n");
	return (0);
}
