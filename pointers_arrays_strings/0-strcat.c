#include "main.h"
#include <stdio.h>

char *_strcat(char *dest, const char *src) {
    char *dest_end = dest;

    // Find the end of the dest string
    while (*dest_end != '\0') {
        dest_end++;
    }

    // Copy src to the end of dest
    while (*src != '\0') {
        *dest_end = *src;
        dest_end++;
        src++;
    }

    // Null-terminate the resulting string
    *dest_end = '\0';

    return dest;
}

int main(void) {
    char dest[100] = "Hello, ";
    char src[] = "world!";

    _strcat(dest, src);
    printf("%s\n", dest);  // Output should be "Hello, world!"

    return 0;
}
