#include <stdio.h>
int main()
{
    int i;
    int primes[] = {2, 3, 5, 7, 11};
    printf("Size of primes: %lu\n", sizeof(primes));
    printf("Size of int: %lu\n", sizeof(int));

    for (i = 0; i < sizeof(primes) / sizeof(int); i++)
    {
        printf("%d <--> %d\n", primes[i], *(primes + i));
        printf("%d is stored at %p\n", primes[i], &(primes[i]));
    }
    return 0;
}