#include <stdio.h>

int sum_to(int n)
{
    int sum = 0;
    for(int i = 1; i <= n; i++)
        sum += i;

    return sum;
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    printf("%d\n", sum_to(n));
}
