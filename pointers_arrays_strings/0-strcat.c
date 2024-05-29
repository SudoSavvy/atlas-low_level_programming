#include "main.h"
#include <stdio.h>
/*
*
*/

char *_strcat(char *dest, char *src) {
    char *dest_end = dest;

    while (*dest_end != '\0') {
        dest_end++;
    }

    while (*src != '\0') {
        *dest_end = *src;
        dest_end++;
        src++;
    }

    *dest_end = '\0';

    return dest;
}

int main(void) {
    char dest[100] = "Hello, ";
    char src[] = "world!";

    _strcat(dest, src);
    printf("%s\n", dest);

    return 0;
}
