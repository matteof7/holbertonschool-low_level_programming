#include "main.h"
#include <stdio.h>

int _strlen(char *s)
{
int number = 0;

while (*s != '\0')
{
number++;
s++;
}

return number;
}
