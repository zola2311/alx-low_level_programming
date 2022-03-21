/**
 * swao_int - swap 2 int pointers
 * @a:input1
 * @b:input2
 * @c:swap variable
 */
void swap_int(int *a,int *b)
{
int *c;
*c = *a;
*a = *b;
*b = *a;
}
