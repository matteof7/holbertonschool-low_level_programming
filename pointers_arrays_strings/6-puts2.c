#include "main.h"
/**
* puts2 - Prints every other character of a string
* @str: The string to be printed
*
* Description: This function prints every other character of a string,
* starting with the first character, followed by a new line.
*/
void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
if (str[i] != '\0')
i++;
}
_putchar('\n');
}
