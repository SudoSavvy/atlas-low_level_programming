 #include "main.h"

 /**
  * Reverse_array: as the name suggests it reverses an array.
  * @a:string to be reversed.
  * @n: the number of elements that the array is made of.
 */

void reverse_array(int *a, int n)
{
    int i, temp;

    for (i = 0; i < n / 2; i++)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }
}