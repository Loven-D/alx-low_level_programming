#ifndef DOG_H

#define DOG_H

/**
 * struct dog - Dog attributes
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Description: The attributes of a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}

typedef struct dog dog_t;

void dog_name(struct dog d);
float dog_age(struct dog d);
void dog_owner(struct dog *d, char *new_owner);

#endif
