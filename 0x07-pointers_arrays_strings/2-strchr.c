#include "main.h"
#include <stddef.h>

/**
* _strchr - locates a character in a string
* @s: pointer to the string to be searched
* @c: character to be located
*
* Description:
*   This function searches for the first occurrence of the character c
*   in the string s.
*
* Return:
*   - If the character c is found, returns a pointer to the first occurrence.
*   - If the character c is not found, returns NULL.
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}

if (*s == c)
return (s);

return (NULL);
}

