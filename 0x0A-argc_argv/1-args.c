#include <stdio.h>
#include  "main.h"
/**
 * main - prints the number of arguments passed into the program
 * @argc: number of arguments passed to the program
 * @argv: array of strings containing the arguments passed to the program
 * Return: 0
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
