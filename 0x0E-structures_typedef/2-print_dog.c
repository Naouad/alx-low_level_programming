#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: a pointer to struct dog to print
 * Description: prints the name, age, and owner of the struct dog
 * pointed to by d, or "(nil)" if a field is NULL.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
