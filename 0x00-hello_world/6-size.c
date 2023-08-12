#include <stdio.h>

/**
 * main - main function
 *
 * Return: o on success
 */

int main(void)
{
	prinf("Size of a char: %lu byte(s)", sizeof(char));
	prinf("size of a int: %lu byte(s)", sizeof(int));
	printf("size of a long int: %lu byte(S)", sizeof(long long int));
	prinf("Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
