#include <stdio.h>

int main()
{
    int a = 0, b = 0, c = 0;
    scanf("%d %d %d", &a, &b, &c);

    if(a < b && b < c)
        printf("YES\n");
    else
        printf("NO\n");
}
