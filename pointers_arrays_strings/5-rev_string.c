#include "main.h"
#include <stdio.h>

void rev_string(char *s)
{
int lol = 0;
int i;
char temp;

while (s[lol] != '\0')
lol++;

for (i = 0; i < lol / 2; i++)
{
temp = s[i];
s[i] = s[lol - 1 - i];
s[lol - 1 - i] = temp;
}
}
