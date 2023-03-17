#include <stdio.h>
#include <unistd.h>
/**
* main - Entry point
* Description: prints the alphabet in lowercase\n
* Return: Always 0 (success)
*/
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
