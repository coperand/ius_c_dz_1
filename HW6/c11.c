#include <stdio.h>

int nod(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
            a %= b;
        else
            b %= a;
    }

    return a + b;
}

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    printf("%d\n", nod(a, b));
}
