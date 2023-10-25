#include "main.h"

/**
*_pow_recursion - give the power of x to y 
*@x: int
*@y: int
*
*Returns an integer
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else if (y == 1)
return (x);
else if (y == 0)
return (1);
return (x * _pow recursion(x, y -1));
}
