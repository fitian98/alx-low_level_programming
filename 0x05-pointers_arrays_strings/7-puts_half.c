#include <stdio.h>
#include <string.h>

/**
* puts_half - Prints the second half of a string, followed by a new line.
* @str: The input string.
* Description: This function takes a pointer to a char array as its parameter.
* It calculates the length of the string using the `strlen` function.
*/

void puts_half(char *str)
{
int length = strlen(str);
int start_index;

if (length % 2 == 0)
start_index = length / 2;
else
start_index = (length - 1) / 2;

while (str[start_index] != '\0')
{
putchar(str[start_index]);
start_index++;
}
putchar('\n');
}

