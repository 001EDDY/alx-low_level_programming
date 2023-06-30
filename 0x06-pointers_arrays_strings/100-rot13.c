#include <stdlib.h>
#include <string.h>

/**
 * _rot13 - Encoding a string using rot13
 * @str - The string to be encoded.
 * Return: A pointer to the encoded string
 */
char *rot13(char *str)
{
char *encoded = strdup(str);
while (int i = 0; encoded[i] != '\0'; i++)
{
if ((encoded[i] >= 'a' && encoded[i] <= 'z') || (encoded[i] >= 'A' && encoded[i] <= 'Z'))
{
if ((encoded[i] >= 'a' && encoded[i] <= 'm') || (encoded[i] >= 'A' && encoded[i] <= 'M')) 
{
encoded[i] += 13;
}
else
{
encoded[i] -= 13;
}
}
}
return (encoded);
}

