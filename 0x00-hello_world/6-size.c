#include <stdio.h>
/**
 * main - print the sizes of various types on the computer
 * Return: 0
 */
int main(void)
{
	printf("size of char: %lu byte(s)\n", sizeof(char));
	printf("size of int: %lu byte(s)\n", sizeof(int));
	printf("size of long int: %lu byte(s)\n", sizeof(long int));
	printf("size of long long int: %lu byte(s)\n", sizeof(long long int));

	return (0);
}
