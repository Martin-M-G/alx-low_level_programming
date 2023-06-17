#include <stdio.h>
/**
 * main - Prog prints alphabet in lowercase then in upper followed by new line
 * Return: 0 (Success)
 */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
for (ch = 'A'; ch <= 'Z'; ch++)
	putchar(ch);
putchar('\n');
return (0);
}
