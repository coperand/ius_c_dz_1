#include <stdio.h>

int abs(int num)
{
    return (num > 0) ? (-1 * num) : num;
}

int main()
{
    int a = 0;
    scanf("%d", &a);
    printf("%d\n", abs(a));
}
