#include <stdio.h>
/**
 * print_rev - revrse printing 
 * @s: the string to be printed
 */
void print_rev(char *s)
{
int index;

while (s[index++] !=0)
index++;

while (index >0)
{

putchar(s[index-1]);
index--;
}
putchar('\n');
}
