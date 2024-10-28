#include "main.h"
#include <stdio.h>
/**
* _isupper - Vérifie si un caractère est une lettre majuscule
* @c: Le caractère à vérifier
*
* Return: 1 si c est une majuscule, 0 sinon
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
