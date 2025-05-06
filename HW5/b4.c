#include <stdio.h>

int main()
{
    int a = 0;
    scanf("%d", &a);

    if(a < 1000 && a > 99)
        printf("YES\n");
    else
        printf("NO\n");
}
