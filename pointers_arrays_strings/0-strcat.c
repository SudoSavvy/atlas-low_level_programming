#include "main.h"
/*
*
*/

int main(void) {
    char dest[100] = "Hello, ";
    char src[] = "world!";

    _strcat(dest, src);
    printf("%s\n", dest); 

    return 0;
}