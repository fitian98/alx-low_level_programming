#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int number = 0;
char hexDigit;
while (number < 10)
{
putchar(number + '0');
number++;
}
hexDigit = 'a';
while (hexDigit <= 'f')
{
putchar(hexDigit);
hexDigit++;
}
putchar('\n');
return (0);
}
