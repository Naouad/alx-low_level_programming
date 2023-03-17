#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
*  main - Entry
*  Return: Always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%d is ", n);
	if (n > 0)
	{
		puts("positive");
	}
	else if (n == 0)
	{
		puts("zero");
	}
	else
		puts("negative");
	return (0);
}
