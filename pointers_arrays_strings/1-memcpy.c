#include "main.h"

/**
* _memcpy - Copies memory area
* @dest: Pointer to the destination array where content will be copied
* @src: Pointer to the source of data to be copied
* @n: Number of bytes to copy
*
* Description: This function copies n bytes from memory area src
* to memory area dest. The memory areas must not overlap.
*
* Return: A pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}