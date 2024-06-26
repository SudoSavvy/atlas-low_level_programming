#ifndef MAIN_H
#define MAIN_H

/** Header file containing all prototypes for the directory more_malloc_free*/

#include <stdlib.h>

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);

#endif