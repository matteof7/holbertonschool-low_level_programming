#include "main.h"
/**
* _strchr - Locates a character in a string
* @s: The string to search
* @c: The character to locate
*
* Description: This function searches for the first occurrence of the
* character c in the string s. It mimics the behavior of the standard
* library function strchr.
*
* Return: A pointer to the first occurrence of c in s, or NULL if c
*         is not found
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (0);
}
s++;
}
if (c == '\0')
{
return (s);
}
return (0);
}
