#include "main.h"

/**
* print_numbers - Imprime les chiffres de 0 à 9 suivis d'une nouvelle ligne
*
* Description: Utilise _putchar seulement deux fois pour imprimer
*              les chiffres de 0 à 9 et un retour à la ligne.
*/
void print_numbers(void)
{
int i;

for (i = 0; i <= 9; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
