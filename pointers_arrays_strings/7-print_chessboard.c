#include "main.h"

/**
* print_chessboard - Prints the chessboard
* @a: 2D array representing the chessboard
*
* Description: This function takes a 2D array representing a chessboard
* and prints it to the standard output. Each element of the array
* represents a square on the chessboard, with characters representing
* different pieces or empty spaces.
*/
void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
}
