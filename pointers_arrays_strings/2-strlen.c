#include "main.h"
#include <stdio.h>
/**
* _strlen - Calculates the length of a string
* @s: The string to measure
*
* Return: The length of the string
*/
int _strlen(char *s)
{
int number = 0;

while (*s != '\0')
{
number++;
s++;
}

return (number);
}
