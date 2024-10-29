#include "main.h"
#include <stdio.h>
/**
* swap_int - Swaps the values of two integers
* @a: Pointer to the first integer
* @b: Pointer to the second integer
*
* Description: This function takes two pointers to integers and swaps
* the values they point to.
*/
void swap_int(int *a, int *b)
{
int letter;

letter = *a;
*a = *b;
*b = letter;
}
