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
int i, j;

for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
count++;
break;
}
}

if (!accept[j])
break;
}
return (count);
}
