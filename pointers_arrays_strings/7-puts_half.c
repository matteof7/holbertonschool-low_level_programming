#include "main.h"

void puts_half(char *str)
{
int i = 0;
int ptdr;

while (str[ptdr] != '\0')
ptdr++;

i = (ptdr % 2 == 0) ? ptdr / 2 : (ptdr - 1) / 2 + 1;

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}

_putchar('\n');
}
