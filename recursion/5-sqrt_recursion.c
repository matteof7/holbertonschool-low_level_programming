#include "main.h"

/**
* _sqrt_recursion_helper - Recursive helper function to find square root
* @n: The number to find the square root of
* @start: The start of the range to search
* @end: The end of the range to search
*
* Return: Natural square root if found, -1 otherwise
*/
int _sqrt_recursion_helper(int n, int start, int end)
{
int mid;

if (start > end)
return (-1);

mid = (start + end) / 2;

if (mid *mid == n)
return (mid);

if (mid *mid > n)
return (_sqrt_recursion_helper(n, start, mid - 1));

return (_sqrt_recursion_helper(n, mid + 1, end));
}

/**
* _sqrt_recursion - Returns the natural square root of a number
* @n: The number to calculate the square root of
*
* Return: The natural square root of n, or -1 if n has no natural square root
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

return (_sqrt_recursion_helper(n, 0, n));
}
