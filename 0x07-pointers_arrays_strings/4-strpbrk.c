#include "main.h"
#include <stddef.h>

/**
* _strpbrk - searches a string for any of a set of bytes
* @s: pointer to the string to be searched
* @accept: pointer to the string containing the characters to search for
*
* Description:
*   This function searches the string s for the first occurrence of any of
*   the bytes in the string accept.
*
* Return:
*   Returns a pointer to the byte in s that matches one of the bytes in
*   accept, or NULL if no such byte is found.
*/
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *a = accept;

while (*a)
{
if (*s == *a)
return (s);

a++;
}

s++;
}

return (NULL);
}

