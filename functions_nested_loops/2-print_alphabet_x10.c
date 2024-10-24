#include "main.h"
/**
* print_alphabet_x10 - Prints the alphabet 10 times
*
* This function prints the lowercase alphabet from 'a' to 'z'
* ten times, with each set on a new line.
*/
void print_alphabet_x10(void)
{
int num;
char letter;
for (num = 0; num < 10; num++)
{
for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);
_putchar('\n');
}
}
