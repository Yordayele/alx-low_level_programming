#include <stdio.h>
/**
 * puts_half - prints half of a string, followed by a new line.
 *
 * @str: the string to be manipulated.
 *
 * Return: nothing.
 */
void puts_half(char *str)
{int len = 0;

while (str[len] != '\0')
{
len++;
}
if (len % 2 == 0)
{
len = len / 2;
while (str[len] != '\0')
{
_putchar(str[len]);
len++;
}
}
else
{
len = ((len - 1) / 2) + 1;
while (str[len] != '\0')
{
_putchar(str[len]);
len++;
}
}
_putchar('\n');
}
