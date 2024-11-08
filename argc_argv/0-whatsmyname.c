#include <stdio.h>

/**
* main - Prints the program name
* @argc: Number of command line arguments
* @argv: Array of command line arguments
* Return: 0 on success
*/
int main(int argc, char *argv[])
{
(void)argc;
printf("%s\n", argv[0]);
return (0);
}