#include "main.h"

/**
* _strcat - Concatenates two strings.
* @dest: The destination string.
* @src: The source string.
*
* Description: This function appends the string `src` to the string `dest`,
* overwriting the terminating null byte ('\0') at the end of `dest`, and then
* adds a terminating null byte. The function assumes that `dest` has enough
* space to hold the concatenated result.
*
* Return: Pointer to the resulting string `dest`.
*/
char *_strcat(char *dest, char *src)
{
char *ptr = dest;

while (*dest != '\0')
dest++;

while (*src != '\0') {
*dest = *src;
dest++;
src++;
}

*dest = '\0';

return (ptr);
}

