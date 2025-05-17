#include <stdio.h>

int is_prime(int n, int delitel)
{
    if (n <= 1)
        return 0;
    if (n == 2)
        return 1;
    if (n % delitel == 0)
        return 0;
    if (delitel * delitel > n)
        return 1;

    return is_prime(n, delitel + 1);
}

int main()
{
    int a = 0;
    scanf("%d", &a);
    printf("%s\n", is_prime(a, 2) ? "YES" : "NO");
}
