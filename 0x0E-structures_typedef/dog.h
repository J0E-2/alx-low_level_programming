#ifndef dog_h
#define dog_h

/**
 * struct dog - structure
 * @name: member 1
 * @age: member 2
 * @owner: member 3
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
