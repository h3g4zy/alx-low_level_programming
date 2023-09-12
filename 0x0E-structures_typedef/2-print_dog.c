#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @name: dog's name
 * @d: initialized dog
 * @age: age of dog
 * @owner: owner
 * 
 * Return: void
 */

void print_dog(struct dog *d)
{
    if (d == NULL)
    {
        printf("(nil)");
    }
    else if (d->name == NULL || d->owner == NULL)
    {

    }
    else
    {
        printf("Name: %s\n", d->name);
        printf("Age: %f\n", d->age);
        printf("Owner: %s\n", d->owner);
    }
}
