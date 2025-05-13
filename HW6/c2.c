#include <stdio.h>

int power(int n, int p)
{
    if(p == 0)
        return 1;

    int result = 1;
    while(p > 0)
    {
        result *= n;
        --p;
    }

    return result;
}

int main()
{
    int n = 0, p = 0;
    scanf("%d %d", &n, &p);
    printf("%d\n", power(n, p));
}
