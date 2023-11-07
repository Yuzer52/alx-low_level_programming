#include <stdlib.h>
#include "dog.h"

/**
  * init_dog - This will initializes a dog structure
  * @d: Is a dog structure.
  * @name: This is the name of the dog.
  * @age: This is the age of the dog.
  * @owner: This is The owner of the dog.
  *
  * Return: Nothing
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
