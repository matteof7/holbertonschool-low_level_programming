#include "main.h"

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
