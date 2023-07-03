#include "main.h"

/**
* _memcpy - copies memory area
* @dest: pointer to the destination memory area
* @src: pointer to the source memory area
* @n: number of bytes to be copied
*
* Description:
*   This function copies n bytes from the memory area pointed to by src
*   to the memory area pointed to by dest.
*
* Return:
*   Returns a pointer to the destination memory area.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}

