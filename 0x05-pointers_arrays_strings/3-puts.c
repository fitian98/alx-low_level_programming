#include <stdio.h>

void _puts(char *str)
{
if (str != NULL) {
while (*str != '\0') {
putchar(*str);
str++;
}
putchar('\n');
}
}

