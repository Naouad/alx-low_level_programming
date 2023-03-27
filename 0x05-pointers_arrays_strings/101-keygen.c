#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PASSWORD_LENGTH 12

/**
 * main - generates a random valid password for 101-crackme.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int sum = 0;
	char password[PASSWORD_LENGTH + 1];

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = rand() % 94 + 33;
		sum += password[i];
	}

	password[PASSWORD_LENGTH] = '\0';

	password[0] = (sum % 10) + '0';

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		printf("%c", password[i]);
	}

	return (0);
}
