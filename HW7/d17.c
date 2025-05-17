#include <stdio.h>

int akkerman(int m, int n)
{
    if(m == 0)
        return n + 1;
    if(n == 0)
        return akkerman(m - 1, 1);

    return akkerman(m - 1, akkerman(m, n - 1));
}

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    printf("%d\n", akkerman(a, b));
}
