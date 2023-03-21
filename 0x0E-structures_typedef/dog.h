#ifndef DOG_H

#define DOG_H

struct dog
{
	char *name;
	float age;
	char *owner;
}

void dog_name(struct dog d);
float dog_age(struct dog d);
void dog_owner(struct dog *d, char *new_owner);

#endif
