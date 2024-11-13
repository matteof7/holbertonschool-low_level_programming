#include <stdlib.h>

/**
* _strdup - duplicates a string
* @str: the string to duplicate
*
* Return: pointer to the duplicated string or NULL if it fails
*/
char *_strdup(char *str)
{
char *dup;
int i, lol = 0;

if (str == NULL)
return (NULL);

while (str[lol])
lol++;

dup = malloc(sizeof(char) * (lol + 1));

if (dup == NULL)
return (NULL);

for (i = 0; i <= lol; i++)
dup[i] = str[i];

return (dup);
}
