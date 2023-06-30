#include <stdio.h>

void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
} 
if (n / 10)
print_number(n / 10);
_putchar('0' + n % 10);
}
int main(void)
{
int a[5] = {97, 98, 99, 100, 101};
int *p = &a[0];
print_number(*(p + 2));
_putchar('\n');
 return (0);
}

