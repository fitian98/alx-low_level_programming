#include <stdio.h>

/**
* _strcpy - Copies the str pointed to by src to buffer pointed to by dest.
* @dest: The destination buffer to copy the string to.
* @src: The source string to be copied.
*
* Description: This function copies the str from the buffer `src` to the
* destination buffer `dest`, including the terminating null byte (`\0`).
* It uses a `while` loop to iterate through each character of the source
* string `src` and copies it to the corresponding position in the
* destination buffer `dest`. After copying all the characters, it explicitly
* adds a null character (`\0`) to the end of the destination buffer to
* terminate the string. Finally, it returns a pointer to the destination
* buffer `dest`.
*
* Return: The pointer to the destination buffer `dest`.
*/

char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}

dest[i] = '\0';
return (dest);
}
