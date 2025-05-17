#include <stdio.h>

int sum_digits(int n)
{
    if(n / 10 == 0)
        return n % 10;

    return n % 10 + sum_digits(n / 10);
}

int main()
{
    int a = 0;
    scanf("%d", &a);
    printf("%d\n", sum_digits(a));
}
