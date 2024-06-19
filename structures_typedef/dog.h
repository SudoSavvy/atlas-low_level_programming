#ifndef DOG_H
#define DOG_H
/**
 * Desc: This header file contains functions to complete 
 * task 1 and create a struct.
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
