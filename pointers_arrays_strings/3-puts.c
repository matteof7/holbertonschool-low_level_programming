#include "main.h"
/**
* _puts - Imprime une chaîne de caractères suivie d'une nouvelle ligne
* @str: La chaîne de caractères à imprimer
*
* Description: Cette fonction imprime chaque caractère de la chaîne
* jusqu'à ce qu'elle rencontre le caractère nul de fin de chaîne.
* Elle ajoute ensuite une nouvelle ligne.
*/
void _puts(char *str)
{
int i = 0;

while (str[i] != '\0')
{
write(1, &str[i], 1);
i++;
}
write(1, "\n", 1);
}
