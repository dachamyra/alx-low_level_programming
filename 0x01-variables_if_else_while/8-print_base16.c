#include <stdio.h>
/**
*main - prints all the numbers of base sixteen
*Description: using the main function
*this program prints all the numbers of base sixteen
*Return: 0
*/
int main(void)
{
char c;
for (c = '0' ; c <= '9' ; c++)
{
	putchar(c);
}
for (c = 'a' ; c <= 'f' ; c++)
{
	putchar(c);
}
putchar('\n');
return (0);
}
