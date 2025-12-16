#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Determines if a number is positive, negative, or zero.
 *
 * Return: 0 on success
 */
int main(void)
{
    int n;

    /* Seed the random number generator */
    srand((unsigned int)time(NULL));

    /* Generate a random number that can be negative, zero, or positive */
    n = rand() - (RAND_MAX / 2);

    if (n > 0)
        printf("%d is positive\n", n);
    else if (n == 0)
        printf("%d is zero\n", n);
    else
        printf("%d is negative\n", n);

    return 0;
}
