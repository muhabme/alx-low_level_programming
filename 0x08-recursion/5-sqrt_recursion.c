#include "main.h"

int helper(int n, int guess);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: number to calculate the square root of
 * Return: natural square root of n or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (helper(n, 1));
}

/**
 * helper - Recursive function to find the square root using binary search
 * @n: number to calculate the square root of
 * @guess: current guess for the square root
 * Return: natural square root of n or -1
 */
int helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (helper(n, guess + 1));
}
