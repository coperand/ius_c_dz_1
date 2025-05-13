#include <stdio.h>

int decimal_to_another(int n, int p)
{
    if(n == 0)
        return 0;

    int result = 0;
    int rank = 1;
    while (n > 0)
    {
        result += (n % p) * rank;
        rank *= 10;

        n /= p;
    }

    return result;
}

int main()
{
    int n = 0, p = 0;
    scanf("%d %d", &n, &p);
    printf("%d\n", decimal_to_another(n, p));
}
