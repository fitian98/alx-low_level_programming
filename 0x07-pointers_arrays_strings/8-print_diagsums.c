#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the square matrix
* @size: size of the matrix (number of rows or columns)
*
* Description:
* This function calculates and prints the sum of the two diagonals of a
* square matrix of integers. The matrix is represented by a 1D array.
*
* The matrix is assumed to be of size `size x size`.
*
* The sum of the main diagonal is printed first, followed by the sum of the
* secondary diagonal, separated by a comma and a space.
*
* Example:
* Consider the following square matrix:
*     {0, 1, 5}
*     {10, 11, 12}
*     {1000, 101, 102}
*
*   The sum of the main diagonal is 0 + 11 + 102 = 113
*   The sum of the secondary diagonal is 5 + 11 + 1000 = 1016
*
*   Therefore, the function would print:
*     113, 1016
*
* Note:
*   - The input array `a` is assumed to have a size of `size * size`.
*   - The function does not return a value.
*/
void print_diagsums(int *a, int size)
{
int i, sum_main = 0, sum_secondary = 0;

for (i = 0; i < size; i++)
{
sum_main += a[(size + 1) * i];
sum_secondary += a[(size - 1) * (i + 1)];
}

printf("%d, %d\n", sum_main, sum_secondary);
}

