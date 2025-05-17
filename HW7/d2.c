#include <stdio.h>

int get_sum(int n)
{
    if(n == 1)
        return 1;

    return n + get_sum(n - 1);
}

int main()
{
    int a = 0;
    scanf("%d", &a);
    printf("%d\n", get_sum(a));
}
