#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	c = 'a';

	while (c <= 'z' || c != 'e' || c != 'q')
	{
				putchar(c);
				c++;
	}
	putchar('\n');
	return (0);
}
