#include <stdio.h>

int is_happy_number(int n)
{
    int sum = 0;
    int mul = 1;
    while(n > 9)
    {
        sum += n % 10;
        mul *= n % 10;

        n /= 10;
    }
    sum += n;
    mul *= n;

    return sum == mul;
}

int main()
{
    int a = 0;
    scanf("%d", &a);
    printf("%s\n", is_happy_number(a) ? "YES" : "NO");
}
