#include "main.h"
#include <stdio.h>
/**
 * strcpy - Copies string pointed by src
 * Return: original_dest
 */
char *strcpy(char *dest, char *src)
{
char *original_dest = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (original_dest);
}

