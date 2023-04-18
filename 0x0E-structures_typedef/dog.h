#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: Define a new type struct dog
 * with the elements: nam, age, owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - initializes a struct dog
 * @d: pointer to struct dog to initialize
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner
 * Description: initializes the struct dog pointed to by d with th
 * specified name, age, and owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
