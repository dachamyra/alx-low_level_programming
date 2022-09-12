#include <stdio.h>
/**
*main - Program that prints 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, to base 10
*Description:  Prints using the main function
*Return: 0
*/
int main(void)
{
int n;
for (n = '0' ; n <= '9' ; n++)
{
putchar(n);
}
putchar ('\n');
return (0);
}
