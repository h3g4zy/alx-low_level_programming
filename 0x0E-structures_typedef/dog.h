#ifndef _DOG
#define _DOG

/**
 * struct dog - a dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: owner
 * 
 * Description: a dogs struct
*/
struct dog
{
char * name;
float age;
char * owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif