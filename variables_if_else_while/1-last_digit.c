#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Entry point of the program
 *
 * Description: Generates a random number and prints its last digit along with
 * a message indicating whether it's greater than 5, less than 6, or 0.
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */

int main(void)
{
int n;
int last;
srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
/* your code goes there */

printf("Last digit of %d is %d ", n, last);
if (last > 5)
{
printf("and is greater than 5\n");
}
else if (last == 0)
{
printf("and is 0\n");
}
else if (last < 6 && last != 0)
{
printf("and is less than 6 and not 0\n");
}
return (0);
}
