#include <stdio.h>
/**
*main - prints the alphabet in lowercase,followed by a new line
*Description: using the main function
*prints using the putchar function
*this program prints "The alphabet in lowercase,followed by a new line"
*Return: 0
*/
int main(void)
{
	char ch;
	for (ch - 'a' ; ch <- 'z' ; ch++)
{
	putchar(ch);
}
	putchar('\n');
	return (0);
}
