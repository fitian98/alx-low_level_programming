#include <stdio.h>

/**
* print_rev - Prints a string in reverse, followed by a new line.
* @s: The string to be printed in reverse.
*
* Description: This function takes a pointer to a string and prints each
*              character of the string in reverse order, followed by a
*              newline character ('\n'), to the standard output.
*              If the pointer to the string is NULL, the function does nothing.
*/

void print_rev(char *s)
{
if (s != NULL)
{
int length = 0;
int i;
while (*(s + length) != '\0')
{
length++;
}
for (i = length - 1; i >= 0; i--)
{
putchar(*(s + i));
}
putchar('\n');
}
}


