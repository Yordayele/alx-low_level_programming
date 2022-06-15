#include <stdio.h>
/**
 * strcat - Concatenates the string pointed by @src,including the terminating
 * null byte, to the end of the string pointed by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to  @dest.
 *
 * Return: The string to be returened.
 */
char *strcat(char *dest, const char *src)
{
int i, j;
i = 0;
j = 0;
while (dest[i] != '\0')
{
i++
}
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';
return (dest);
