#include "main.h"
#include <string.h>

/**
 * _leet - Encodes a string into 1337
 *
 *
 */
char *leet(char *str)
{
char *encoded = strdup(str);
char *map[] = ["4", "3", "0", "7", "1"];
char *letters[] = ["aA", "eE", "oO", "tT", "lL"];
int numMappings = sizeof(map) / sizeof(map[0]);
for (int i = 0; encoded[i] != '\0'; i++)
{
for (int j = 0; j < numMappings; j++)
{
if (strchr(letters[j], encoded[i]) != NULL)
{
encoded[i] = map[j][0];
break;
}
}
}
