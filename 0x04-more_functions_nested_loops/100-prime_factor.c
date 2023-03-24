#include "main.h"
/**
 * main - entery point
 * Description : prints the largest prime factor of 612852475143
 * Return: always 0
 */

int main(void)
{
	unsigned long int i;
	unsigned long int n;

	n = 612852475143;
	i = 3;

	while (i < 782849)
	{
		while ((n % i == 0) && (n != i))
			n = n / i;
		i = i + 2;
	}
	printf("%lu\n", n);
	return (0);
}
