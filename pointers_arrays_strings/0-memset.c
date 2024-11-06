#include "main.h"

/**
* _memset - Fills memory with a constant byte
* @s: Pointer to the memory area to be filled
* @b: The constant byte to fill the memory with
* @n: Number of bytes to be filled
*
* Description: This function fills the first n bytes of the memory area
* pointed to by s with the constant byte b. It mimics the behavior of
* the standard library function memset.
*
* Return: A pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
