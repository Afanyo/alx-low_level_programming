#include <stdio.h>
/**
 * main - print sizes of variables
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of a char: %ld byte(S)\n",  sizeof(a));
	printf("Size of an int: %ld byte(S)\n", sizeof(b));
	printf("Size of a long int: %ld byte(S)\n", sizeof(c));
	printf("Size of a long long int: %ld byte(S)\n", sizeof(d));
	printf("Size of a float: %ld byte(S)\n", sizeof(f));
	return (0);
}
