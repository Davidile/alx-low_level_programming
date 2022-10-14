#include<stdio.h>
/**
 * main - main functon
 *Description : printing single digit number of base 10 starting from 01
 *Return: 0.
 */
int main(void)
{
int x;
for (x = '0' ; x <= '9' ; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
