#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: The string to calculate the length of
 *
 * Return: The length of the string
 *
 * Description: This function recursively calculates the length of a string
 * by counting the number of characters until it reaches the null terminator.
 * It does not use any loops and instead relies on recursive calls.
 *
 * Note: This function mimics the behavior of the standard library's strlen,
 * but uses recursion instead of iteration.
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return 0;
return 1 + _strlen_recursion(s + 1);
}
