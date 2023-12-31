#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog attributes
 * @name - name of the dog
 * @age - age of the dog
 * @owner - dog's owner
 *
 * Description: this struct stores dog's attributes
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
