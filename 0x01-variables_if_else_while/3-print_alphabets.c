#include <stdio.h>
/**
*main - print the alphabet in lowercase and then uppercase
*Description: using the main function
*this program prints "The alphabet in lowercase and then uppercase"
*Return: 0
*/
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
	putchar(ch);
}
for (ch = 'A' ; ch <= 'Z' ;ch++)
{
	putchar(ch);
}
putchar("\n");
return (0);
}
