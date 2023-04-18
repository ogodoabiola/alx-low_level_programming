#ifndef DOG_H
#define DOG_H

/**
 * struct dog - main entry
 * @name: naming conv
 * @age: what is the age
 * @owner: the owner
 * Return: 0
 */

struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
