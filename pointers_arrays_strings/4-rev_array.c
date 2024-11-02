#include "main.h"
#include <stdio.h>

void reverse_array(int *a, int n)
{
int debut = 0;
int fin = n - 1;
int ptdr;

while(debut < fin)
{

ptdr = a[debut];
a[debut] = a[fin];
a[fin] = ptdr;

debut++;
fin--;
}
}
