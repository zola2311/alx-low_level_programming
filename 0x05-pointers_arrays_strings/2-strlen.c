#include <stdio.h>
/**
 * _strlen - fun that return length str
 * @s:input variable
 * Return: length of str
 */
size_t _strlen(char *s)
{
size_t length = 0;

while (*s++)
	length++;

return (length);
}
