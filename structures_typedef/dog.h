#ifndef dog_h
#define dog_h

typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t

int _put har(char c);
void init_dog)struct dog *d, char *name, float age, char *owner);
void print_dog(struct *dog);
dog_t *new_dog(char *name, flaot age, char *owner);
void free_dog(dog_t *d);

#endif