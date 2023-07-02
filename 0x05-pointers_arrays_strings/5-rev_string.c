#include "main.h"
#include <stddef.h>

/**
* rev_string - Reverses a string.
* @s: The string to be reversed.
*
* Description: This function takes a pointer to a string and reverses the order
*              of the characters in-place. It swaps the characters from the
*              start and end of the string until it reaches the middle.
*              If the pointer to the string is NULL, the function does nothing.
*/
void rev_string(char *s)
{
if (s != NULL)
{
int length = 0;
int i, j;
char temp;

/* Calculate the length of the string */
while (*(s + length) != '\0')
length++;


/* Reverse the string by swapping characters from both ends */
for (i = 0, j = length - 1; i < j; i++, j--)
{
temp = *(s + i);
*(s + i) = *(s + j);
*(s + j) = temp;
}
}
}

