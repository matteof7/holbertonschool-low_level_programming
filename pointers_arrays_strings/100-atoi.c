#include "main.h"
#include <stdio.h>

int _atoi(char *s)

/**
* _atoi - Converts a string to an integer
* @s: The string to be converted
*
* Return: The integer converted from the string
*/
int _atoi(char *s)
{
int ptdr = 0;
int lol = 1;
int i = 0;

while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
i++;

while (s[i] == '-' || s[i] == '+')
{
if (s[i] == '-')
lol *= -1;
i++;
}

while (s[i] >= '0' && s[i] <= '9')
{
if (ptdr > INT_MAX / 10 || (ptdr == INT_MAX / 10 && s[i] - '0' > INT_MAX % 10))
return (lol == 1) ? INT_MAX : INT_MIN;

ptdr = ptdr * 10 + (s[i] - '0');
i++;
}

return ptdr * lol;
}
