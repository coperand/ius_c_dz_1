#include <stdio.h>

void print_range(int a, int b, int first)
{
    if(!first)
        printf(" ");
    if (a == b)
        printf("%d", a);
    else if (a < b)
    {
        printf("%d", a);
        print_range(a + 1, b, 0);
    }
    else
    {
        printf("%d", a);
        print_range(a - 1, b, 0);
    }
}

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    print_range(a, b, 1);
    printf("\n");
}
