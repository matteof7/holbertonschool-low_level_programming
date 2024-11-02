#include "main.h"
#include <stdio.h>
#include <limits.h>

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
int digit;

while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
{
if (s[i] == '-')
lol *= -1;
i++;
}

while (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';
if (ptdr > INT_MAX / 10 || (ptdr == INT_MAX / 10 && digit > INT_MAX % 10))
return ((lol == 1) ? INT_MAX : INT_MIN);
if (ptdr < INT_MIN / 10 || (ptdr == INT_MIN / 10 && digit > -(INT_MIN % 10)))
return (INT_MIN);

ptdr = ptdr * 10 + lol *digit;
i++;
}

return (ptdr);
}
