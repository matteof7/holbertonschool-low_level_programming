#include "main.h"
/**
* puts_half - Prints half of a string
* @str: The string to be printed
*
* Description: This function prints the second half of the string.
* If the number of characters is odd, it prints the last n characters
* of the string, where n = (length_of_the_string - 1) / 2.
*/
void puts_half(char *str)
{
int i = 0;
int ptdr;

while (str[i] != '\0')
i++;

ptdr = (i + 1) / 2;

while (str[ptdr] != '\0')
{
_putchar(str[ptdr]);
ptdr++;
}

_putchar('\n');
}
