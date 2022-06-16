#include <stdio.h>
/**
 * _strncat - Concatenates two strings
 *
 * @dest: Destination
 * @src: Source
 * @n: No of byte
 *
 * Return: Pointer to destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, length, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		length++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
