#include <stdio.h>
/**
 * print_rev - revrse printing 
 * @s: the string to be printed
 */
void print_rev(char *s)
{
int len = 0, index;

while (s[index++])
len++;

for(index = len-1; index >= 0; index--)
putchar(s[index]);
putchar('\n');
}
