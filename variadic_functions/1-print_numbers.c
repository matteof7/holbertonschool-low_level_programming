#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>

/**
* print_numbers - Prints numbers followed by a new line
* @separator: String to be printed between numbers
* @n: Number of integers passed to the function 
*
* Description: This function prints a variable number of integers,
* separated by the given separator string. If separator is NULL,
* it won't be printed. A new line is printed at the end.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

va_start(args, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));

if (i < n - 1 && separator != NULL)
printf("%s", separator);
}

printf("\n");

va_end(args);
}