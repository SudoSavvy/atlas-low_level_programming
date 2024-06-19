#include <stdio.h>
#include "dog.h"

int main(void)
{
    struct dof my_dog;

    init_dog(&my_dog, "Buddy", 3.5, "Alice");
    print_dog(&my_dog);

    struct dog *new_doggy = new_dog("Max", 4.0, "Bob");
    if (new_doggy == NULL)
    {
        fprintf_stderr, "Failed to create a new dog\n");
        return (1);
    }
    print_dog(new_doggy);
    free_dog(new_doggy);

    return (0);
}
