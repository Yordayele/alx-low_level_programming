#include <stdio.h>
/**
 * main - Entry point
 *
 * for loop
 * Return:Always 0 (Success)
 */
int main(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
	{
		putchar(x);
		putchar("\n");
	}
	for  (x = 'A' ; x <= 'Z' ; x++)
	{
		putchar(x);
		putchar("\n");
		return (0);
