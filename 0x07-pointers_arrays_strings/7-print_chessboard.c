#include "main.h"
#include <stdio.h>

/**
* print_chessboard - prints the chessboard
* @a: 2D array representing the chessboard
*
* Description:
* This function prints the chessboard represented by a 2D array. Each element
* of the array represents a cell on the chessboard and is of type char.
*
* The chessboard is an 8x8 grid. The ' 'character represents an empty cell,
* and other characters represent different chess pieces.
*
* The chessboard is printed row by row, separated by a new line.
* Note:
*   - The input array `a` is assumed to have dimensions 8x8.
*/
void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
putchar(a[i][j]);
}
putchar('\n');
}
}

