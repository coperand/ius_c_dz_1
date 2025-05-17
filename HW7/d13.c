#include <stdio.h>

void print_simple(int n, int divisor)
{
    if (n == 1)
        return;
    
    if (n % divisor == 0)
    {
        printf("%d ", divisor);
        print_simple(n / divisor, divisor);
    }
    else
        print_simple(n, divisor + 1);
}

int main()
{
    int a = 0;
    scanf("%d", &a);
    print_simple(a, 2);
    printf("\n");
}
