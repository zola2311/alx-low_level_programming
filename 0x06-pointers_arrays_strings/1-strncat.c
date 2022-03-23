#include "main.h"
/**
 * _strncat - Concatenates two strings using at most
 * an inputted number of bytes from src.
 * @dest: The string to be appended upon.
 * @src: The string to be appended to dest.
 * @n: The number of bytes from src to be appended to dest.
 * Return: A pointer 
 */
char *_strncat(char *dest, char *src, int n)
{
int index = 0, dest_len = 0;

while (dest[dest_len])
{
dest_len++;
}
while (index < n && src[index])
{
dest[dest_ln] = src[index];
dest_ln++;
index++;
}
dest[dest_len + n + 1] = '\0';

return (dest);
}
