#include "main.h"
/**
* print_line - Prints a straight line in the terminal
* @n: The number of times the character '\\' should be printed
*
* Description: If n is 0 or less, the function should only print '\n'
*/
void print_line(int n)
{
int i;

if (n <= 0)
{
_putchar('\n');
return;
}

for (i = 0; i < n; i++)
{
_putchar('\\');
}
_putchar('\n');
}
