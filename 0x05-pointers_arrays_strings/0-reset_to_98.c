#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n=402;
	printf("n=%d\n",n);
	reset_to_98(&n);
	printf("n=%d\n",n);
	return(0);
}
/**
 * reset_to_98 - fun that reset num
 *
 * Return: Always zero
 */
void reset_to_98(int *n);
{
	*n=98;
	return(0);
}
