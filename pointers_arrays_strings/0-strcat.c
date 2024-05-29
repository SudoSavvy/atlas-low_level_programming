#include "main.h"
#include <stdio.h>
/*

*/

char *_strcat(char *dest, char *src);
int main() {
    char dest[100] = "Hello, ";
    char src[] = "world!";

    _strcat(dest, src);
    printf("%s\n", dest);

    return 0;
}