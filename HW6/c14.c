#include <stdio.h>

int is_sum_even(int a)
{
    int sum = 0;
    while(a > 9)
    {
        sum += a % 10;
        a /= 10;
    }
    sum += a;

    return sum % 2 == 0;
}

int main()
{
    int a = 0;
    scanf("%d", &a);
    printf("%s\n", is_sum_even(a) ? "YES" : "NO");
}
