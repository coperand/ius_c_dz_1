#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    scanf("%d %d", &a, &b);
    if(a <= b)
        printf("%d %d\n", a, b);
    else
        printf("%d %d\n", b, a);
}
