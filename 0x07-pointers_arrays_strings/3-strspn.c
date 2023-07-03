#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: pointer to the string to be searched
* @accept: pointer to the string containing the characters to match
*
* Description:
*   This function calculates the length of the maximum initial segment of
*   the string s that consists only of characters from the string accept.
*
* Return:
*   Returns the number of bytes in the initial segment of s that consist
*   only of bytes from accept.
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int match;

while (*s)
{
match = 0;
while (*accept)
{
if (*s == *accept)
{
count++;
match = 1;
break;
}
accept++;
}
if (match == 0)
break;
s++;
accept = accept - count;
}

return (count);
}

