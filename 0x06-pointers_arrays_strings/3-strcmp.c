#include <stdio.h>
/**
 * _strcmp - Compare two string
 * @s1: pointer to the first string
 * @s2: Pointer to the second string
 *
 * Return: The compared string
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 &&  *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - s2);
}
