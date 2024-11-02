#include "main.h"
#include <stdio.h>
/**
* _strncat - Concatenates two strings, using at most n bytes from src
* @dest: The destination string
* @src: The source string
* @n: The maximum number of bytes to use from src
*
* Return: A pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
int lol = 0;
int i;

while (dest[lol] != '\0')
{
lol++;
}

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[lol + i] = src[i];
}

dest[lol + i] = '\0';

return (dest);
}
