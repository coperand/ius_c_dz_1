#include <stdio.h>

int main()
{
    int a = 0;
    scanf("%d", &a);

    int sum = 0;
    while(a > 9)
    {
        sum += a % 10;
        a /= 10;
    }
    sum += a;

    printf("%s\n", (sum == 10) ? "YES" : "NO");
}
