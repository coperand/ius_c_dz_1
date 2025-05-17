#include <stdio.h>

int recurs_power(int n, int p)
{
    if(p == 0)
        return 1;
    if(p == 1)
        return n;

    return n * recurs_power(n, p - 1);
}

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    printf("%d\n", recurs_power(a, b));
}
