#include "main.h"
/**
* _strchr - Locates a character in a string
* @s: The string to be searched
* @c: The character to find
*
* Description: This function searches for the first occurrence
* of the character c in the string s.
*
* Return: A pointer to the first occurrence of the character c in the string s
* or NULL if the character is not found
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
