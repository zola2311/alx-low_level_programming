include "main.h"
/**
 *print_sign - Prints the sign of a number
 *Description: The number to be checked
 *Return: 1 for posit
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
return (0);
}
