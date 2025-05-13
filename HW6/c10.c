#include <stdio.h>

void print_simple(int n)
{
    if (n <= 1)
    {
        printf("%d", n);
        return;
    }

    int divider = 2;
    int printed = 0;
    while(n > 1)
    {
        if(n % divider == 0)
        {
            if(printed)
                printf(" ");
            else
                printed = 1;

            printf("%d", divider);

            n /= divider;
        }
        else
            divider++;
    }
    printf("\n");
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    print_simple(n);
}
