#include "main.h"

int main(void)
{
    int num;

  for (num = 1; num <= 100; num++)
    {
      if (num % 3 == 0 && num % 5 == 0)
        printf( "FizzBuzz");
      else if (num % 3 == 0)
        printf("fizz");
      else if (num % 5 == 0)
        printf("buzz");
      else
        printf("%d", num);

      if (num == 100)
        continue;
      printf(" ");
    }
  printf( "\n");

  return (0);
}
