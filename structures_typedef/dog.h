#ifndef DOG_H
#define DOG_H

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
