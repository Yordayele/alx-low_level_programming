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
		printchar(x);
		printchar("\n");
	}
	for  (x = 'A' ; x <= 'Z' ; x++)
	{
		printchar(x);
		printchar("\n");
		return (0);
