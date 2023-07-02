#include <stdio.h>

/**
* _puts - Prints a string followed by a newline character to stdout.
* @str: The string to be printed.
*
* Description: This function prints each character of the given string,
*              followed by a newline character, to the standard output.
*              If the pointer to the string is NULL, the function does nothing.
*/

void _puts(char *str)
{
if (str != NULL)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
}

