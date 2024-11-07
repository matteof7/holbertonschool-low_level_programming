#include <stdio.h>

/**
* main - Prints the program name
* @argc: The number of command line arguments
* @argv: An array containing the program command line arguments
*
* Return: Always 0 (Success)
*
* Description: This program prints its own name, followed by a new line.
* If the program is renamed, it will print the new name without
* needing to be recompiled. The path before the name of the program
* is not removed.
*/
int main(int argc, char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
