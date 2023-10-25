#include "main.h"

/**
* factorial - prints factorial
*@n: int
*
*Returns integer
*/

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
