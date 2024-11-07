#include "main.h"

/**
* _print_rev_recursion - Prints a string in reverse
* @s: Pointer to the string to be printed
*
* Description: This function uses recursion to print
* each character of the string starting from the end.
* It does not use any loops and does not return a value.
*
* Return: Void
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
return;
_print_rev_recursion(s + 1);
putchar(*s);
}
