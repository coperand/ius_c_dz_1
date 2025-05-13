#include <stdio.h>

int is_prime(int n)
{
    int simple = (n < 2) ? 0 : 1;
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            simple = 0;
            break;
        }
    }

    return simple;
}

int main()
{
    int a = 0;
    scanf("%d", &a);
    printf("%s\n", is_prime(a) ? "YES" : "NO");
}
