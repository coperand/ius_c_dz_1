#include <stdio.h>

int count_ones(int n)
{
    if(n == 0)
        return 0;

    return n % 2 + count_ones(n / 2);
}

int main()
{
    int a = 0;
    scanf("%d", &a);
    printf("%d\n", count_ones(a));
}
