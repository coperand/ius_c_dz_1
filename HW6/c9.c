#include <stdio.h>

int factorial(int n)
{
    if(n == 0)
        return 1;

    int result = 1;
    for(int i = 2; i <= n; i++)
        result *= i;

    return result;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%d\n", factorial(n));
}
