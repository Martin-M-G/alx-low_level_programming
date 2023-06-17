#include <stdio.h>
/**
 * main - Program that prints the alphabet in lowercase followed by new line
 * Return: 0 (Success)
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
