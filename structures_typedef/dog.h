#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure to store a dog's basic information
 * @name: The name of the dog (char pointer)
 * @age: The age of the dog (float)
 * @owner: The owner of the dog (char pointer)
 *
 * Description: This structure is used to store the basic information
 * about a dog, including its name, age, and owner.
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
struct dog *new_dog(char *name, float age, char *owner);
void free_dog(struct dog *d);

#endif /* DOG_H */
