#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: Base number
 * @y: Exponent
 *
 * Return: Result of x^y, -1 if y is negative.
 */
int _pow_recursion(int x, int y)
{
    if (y < 0)
    {
        return -1; // Return -1 for negative exponent
    }
    if (y == 0)
    {
        return 1; // Anything raised to the power of 0 is 1
    }
    return x * _pow_recursion(x, y - 1); // Recursively compute x^y
}
