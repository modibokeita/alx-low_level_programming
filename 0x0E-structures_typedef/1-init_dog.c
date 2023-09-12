#include "dog.h"
#include "main.h"
#include <stdio.h>
/**
  * init_dog -  initialize a variable of type struct dog
  * @d: a dog structure
  * @name: name of the dog
  * @age: age of the dog
  * @owner: owner of the dog
  * Return: 0
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
