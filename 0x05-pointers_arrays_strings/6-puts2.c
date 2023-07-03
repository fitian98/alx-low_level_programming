#include <stdio.h>
/**
* puts2 - Prints every other char of a string, starting with the first char,
* followed by a new line.
* @str: The input string.
* Description : This function takes a pointer to a char array as its parameter.
* It iterates through the string char by char, checking if the
* current index is even. If it is, it prints the character. It
* adds a newline character after printing all the characters.
*/

void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (i % 2 == 0)
putchar(str[i]);
i++;
}
putchar('\n');
}

