#include <unistd.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: print lowercase alphabets in reverse
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
