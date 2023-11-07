#ifndef DOG_H
#define DOG_H
/**
* struct dog - Defines a dog's attributes
* @name: The name of the dog.
* @age: The age of the dog.
* @owner: The name of the dog's owner.
*
* Description: This struct defines the attributes of a dog,
* including its name, age, and owner's name.
*/
struct dog
{
char *name;
float age;
char *owner;
};

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *copy_string(char *src);

#endif
