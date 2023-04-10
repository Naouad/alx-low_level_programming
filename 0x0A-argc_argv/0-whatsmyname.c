#include <stdio.h>

/**
 * main - prints of the program
 * @argc: the number of arguments used when running the program
 * @argv: the array of arguments used when running the program
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	printf("%s\n", argv[0]);
	return 0;
}
