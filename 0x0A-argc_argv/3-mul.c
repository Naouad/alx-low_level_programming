#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point. Multiplies two numbers
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments passed to the program
 * Return: 0 (Success), or 1 if the program does not receive two arguments
 */

int main(int argc, char *argv[])
{
	int a, b, product;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	product = a * b;

	printf("%d\n", product);

	return (0);
}
