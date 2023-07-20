#include <stdio.h>
/**
  * main - A program that prints the size of various computer types
  *  Return: 0 (Success)
  */
int main(void)
{
	printf("size of a char: %d bytes(s)", sizeof(char));
	printf("size of an int: %d bytes(s)", sizeof(int));
	printf("size of a long int: %d bytes(s)", sizeof(long int));
	printf("size of a long long int: %d bytes(s)", sizeof(long long int));
	printf("size of a float: %d bytes(s)", sizeof(float));
	return (0);
}
