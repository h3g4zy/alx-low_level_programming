#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: Pointer to new dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *ptr;

if (!name || age < 0 || !owner)
return (NULL);

ptr = (dog_t*) malloc(sizeof(dog_t));
if (ptr = NULL)
return (NULL);

(*ptr).name = malloc(sizeof(char) * (strlen(name) + 1));
if (ptr->name == NULL)
{
free(ptr);
return (NULL);
}

(*ptr).owner = malloc(sizeof(char) * (strlen(owner) + 1));
if (ptr->owner == NULL)
{
free(ptr);
return (NULL);
}

ptr->name = strcopy(ptr->name, name);
ptr->age = age;
ptr->owner = strcopy(ptr->owner, owner);

return (ptr);
}