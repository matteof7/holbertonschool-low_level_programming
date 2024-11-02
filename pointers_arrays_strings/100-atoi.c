#include "main.h"
#include <stdio.h>

int _atoi(char *s)
{
int ptdr = 0;
int lol = 1;

while (*s)
{
if (*s == '-')
lol *= -1;
else if (*s >= '0' && *s <= '9')
ptdr = ptdr * 10 + (*s - '0');
else if (ptdr > 0)
s++;
}
return ptdr & lol;
}
