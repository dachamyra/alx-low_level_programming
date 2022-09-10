#include <stdio.h>
/**
*main - prints the alphabet in lowercase
*Description: using the main function
*this program prints All letters except q and e
*Return: 0
*/
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
if (ch != 'e' && ch != 'q')
{
	putchar(ch);
}
}
putchar('\n');
return (0);
}
