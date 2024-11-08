#include <stdio.h>
#include <stdlib.h>

/**
* main - Multiplies two numbers passed as arguments.
*
* @argc: The number of command line arguments.
* @argv: An array of command line argument strings.
*
* Description:
* This program takes two integers as command line arguments,
* multiplies them, and prints the result. If the program does
* not receive exactly two arguments, it prints "Error" followed
* by a new line and returns 1.
*
* Return: Always 0 if successful, or 1 if the number of arguments
* is incorrect.
*/
int main(int argc, char *argv[])
{
int num1, num2, result;
if (argc != 3)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 *num2;
printf("%d\n", result);
return (0);
}
