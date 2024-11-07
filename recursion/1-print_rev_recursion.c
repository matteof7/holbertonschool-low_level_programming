#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: The string to be printed in reverse
 *
 * Description: This function recursively prints each character of the input
 * string in reverse order. It does not print a new line at the end.
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
if (*s == '\0')
return;
_print_rev_recursion(s + 1);
putchar(*s);
}
