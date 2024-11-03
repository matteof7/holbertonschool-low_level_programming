#include "main.h"
#include <stdio.h>

/**
* cap_string - Capitalizes all words of a string
* @str: The string to be modified
*
* Return: A pointer to the modified string
*/

char *cap_string(char *str)
{
int i = 0;
int lol = 1;

while (str[i] != '\0')
{
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
str[i] == ',' || str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' || str[i] == '"' ||
str[i] == '(' || str[i] == ')' || str[i] == '{' ||
str[i] == '}')
{
lol = 1;
}
else if (lol && str[i] >= 'a' && str[i] <= 'z')
{
str[i] = str[i] - 32;
lol = 0;
}
else
{
lol = 0;
}
i++;
}
return (str);
}
