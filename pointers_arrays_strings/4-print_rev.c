#include "main.h"
/**
* print_rev - Prints a string in reverse
* @s: The string to be printed
*
* Description: This function takes a string as input and prints
* its characters in reverse order.
*/
void print_rev(char *s)
{
int lol = 0;
int i;

while (s[lol] != '\0')
{
lol++;
}

for (i = lol - 1; i >= 0; i--)
{
_putchar(s[i]);
}

_putchar('\n');
}
