#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: print numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	a = '0';

	while (a <= '9')
	{
		putchar(a);

		if (a != '9')
		{
			putchar(',');
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
