#include <stdio.h>
#include<time.h>
#include<stdio.h>
/**betty style*/
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;

	srand(time(0));
	x = rand() - RAND_MAX / 2;
	if (x > 0)
		printf("%d is postive\n", x);
	else if (x == 0)
		printf("%d is zero\n", x);
	else
		printf("%d is negative\n", x);
	return (0);

}
