#include <stdio.h>
/**
 * _puts - fun that prints string
 * Return:nothing
 *
 * @str:to be printed strn
 */
void _puts(char *str)

{
while (*str)
_putchar(*str++);

_putchar('\n');
}
