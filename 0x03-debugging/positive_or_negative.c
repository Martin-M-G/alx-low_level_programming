#include "main.h"
/**
 * positive_or_negative - Determine if number is positive, negative or zero
 * i - Is the number to be checked
 * Return: 0 on success
 */
void positive_or_negative(int i)
{
i = 0;
if (i < 0)
{
printf("%d is %s\n", i, "negative");
}
else if (i > 0)
{
printf("%d is %s\n", i, "positive");
}
else
{
printf("%d is %s\n", i, "zero");
}
return;
}
