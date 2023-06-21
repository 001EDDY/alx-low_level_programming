#include "main.h"

/**
 * -sign - Checks for integer
 *  @n: The integer to be checked
 *  Return: 1 for a positive number, 0 for zero and -1 for anything else
 */

int print_sign(int n)
{
if (n > 0)
{
printf("+");
return (1);
} else if (n < 0)
{
printf("-");
return (-1);
} else
{
printf("0");
return (0);
}
}
