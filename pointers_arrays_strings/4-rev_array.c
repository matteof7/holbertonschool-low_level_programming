#include "main.h"
#include <stdio.h>

/**
* reverse_array - Reverses the content of an array of integers
* @a: Pointer to the array to be reversed
* @n: Number of elements in the array
*
* Description: This function takes an array of integers and its size,
* then reverses the order of the elements in the array in place.
* It swaps elements from the ends towards the middle until the entire
* array is reversed.
*/

void reverse_array(int *a, int n)
{
int debut = 0;
int fin = n - 1;
int ptdr;

while (debut < fin)
{
ptdr = a[debut];
a[debut] = a[fin];
a[fin] = ptdr;

debut++;
fin--;
}
}
