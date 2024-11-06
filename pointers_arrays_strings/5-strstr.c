#include "main.h"
/**
* _strstr - Locates a substring
* @haystack: The string to search in
* @needle: The substring to search for
*
* Description: This function finds the first occurrence of the substring
* needle in the string haystack. The terminating null bytes (\0) are not
* compared. It mimics the behavior of the standard library function strstr.
*
* Return: A pointer to the beginning of the located substring,
*         or NULL if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
char *h, *n;
if (*needle == '\0')
return (haystack);
while (*haystack != '\0')
{
h = haystack;
n = needle;
while (*n != '\0' && *h == *n)
{
h++;
n++;
}
if (*n == '\0')
return (haystack);
haystack++;
}
return (0);
}
