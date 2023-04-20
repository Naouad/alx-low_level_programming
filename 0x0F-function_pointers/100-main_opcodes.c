#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes of its own main function
 * @argc: number of arguments
 * @argv: array/vector of arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, num_bytes;
	int (*ptr)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num_bytes; i++)
	{
		opcode = *(unsigned char *)ptr;
		printf("%.2x", opcode);
		if (i == num_bytes - 1)
			continue;
		printf(" ");
		ptr++;
	}
	printf("\n");

	return (0);
}
