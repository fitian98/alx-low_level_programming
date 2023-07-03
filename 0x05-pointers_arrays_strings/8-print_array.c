#include <stdio.h>

/**
* print_array - Prints n elements of an array of int, followed by a new line.
* @a: The input array of integers.
* @n: The number of elements to be printed.
*
* Description: This function takes a pointer to arr of int and the number of
* elements to be printed. It uses a `for` loop to iterate through the array
* and print each element using `printf` with the format specifier `%d` to
* represent an integer. After printing each element, it checks if the current
* element is not the last element, and if so, it prints a comma and
* a space using `printf`. Finally, a newline character
* (`\n`) is printed using `printf` to add a line break
*/
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);

if (i != n - 1)
printf(", ");
}

printf("\n");
}
