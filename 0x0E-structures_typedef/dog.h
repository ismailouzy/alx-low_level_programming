#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure for dog
 * @name: name parametre
 * @age: age parametre
 * @owner: owner parametre
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);




#endif
