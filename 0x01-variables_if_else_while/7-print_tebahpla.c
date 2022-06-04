#include <stdio.h>
/**
 * main - Entry point
 *
 * for loop
 *
 * Return: Always 0(Succes)
 */
int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
	{
		putchar(ch);
	}

	return (0);
}
