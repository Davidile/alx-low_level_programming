#include<stdio.h>
/**
 * main - Prints the size of many var type 
 *
 * Return: Always 0 (success)
 */
int main(void)
{
        char a;
	int b;
	long int c;
        long long int d;
	float e;

	printf( "Size of a char: %d bytes(s)\n", sizeof(a));
	printf( "Size of an int: %d bytes(s)\n",sizeof(b));
	printf( "Size of a long int : %d bytes(s)\n",sizeof(c));
        printf("Size of a long long  int: %d bytes(s)\n",sizeof(d));
	printf("size of a float: %d byte(s)\n",sizeof(e));
	return (0);
}
