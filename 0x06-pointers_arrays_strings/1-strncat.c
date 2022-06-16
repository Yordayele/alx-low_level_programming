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
int i, j, k;

i = strlen(dest);
j = strlen(src);
for (k = 0; k <= j; k++)
{
dest[i + k] = src[k];
}
dest[i + k] = '\0';
return (dest);
}
