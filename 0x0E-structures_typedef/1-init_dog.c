#include "dog.h"

/**
 * init_dog - initialize a dog
 * @name: dog's name
 * @d: initialized dog
 * @age: age of dog
 * @owner: owner
 * 
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}