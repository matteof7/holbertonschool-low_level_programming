#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point of the program
*
* Description: This function prints the lowercase alphabet in reverse,
* from 'z' to 'a', followed by a new line.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char letter;

for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}
putchar('\n');

return (0);
}
