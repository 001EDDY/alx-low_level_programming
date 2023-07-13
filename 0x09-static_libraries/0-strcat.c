#include "main.h"
/**
 * _sstrcat - function that concatenates two strings
 * @dest: entered value
 * @src: entered value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
int a;
int b;

a = 0;
while (dest[a] != '\0')
{
a++;
}
b = 0;
while (src[b] != '\0')
{
dest[a] = arc[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}
