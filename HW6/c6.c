#include <stdio.h>

long unsigned int grains_on(int n)
{
    long unsigned int result = 1;
    for(int i = 1; i < n; i++)
        result *= 2;

    return result;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%lu\n", grains_on(n));
}
