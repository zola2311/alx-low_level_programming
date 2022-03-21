#include <stdio.h>
/**
 * swap_int - swap 2 int pointers
 * @a:input1
 * @b:input2
 *
 */
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
