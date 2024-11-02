#include "main.h"
/**
* print_array - Prints n elements of an array of integers
* @a: The array of integers
* @n: The number of elements to be printed
*
* Description: This function prints n elements of an array of integers,
* followed by a new line. Numbers are separated by comma and space.
* The numbers are displayed in the same order as they are stored in the array.
*/
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
if (i > 0)
printf(", ");
printf("%d", a[i]);
}
printf("\n");
}
