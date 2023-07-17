#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure to the variables
 * @name: name variable
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: this struture containd all the information pertaing to the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - Typedef for dog
 */
typedef struct dog dog_t;
#endif
