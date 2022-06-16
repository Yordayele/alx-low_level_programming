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
	int i = 0, dest_len = 0;

	while (dest[++])
		dest_len++;
	for (i = 0; src[i] && i < n; i++)
		dest[dest_len] = src[i];
	return (dest);
}
