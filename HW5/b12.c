#include <stdio.h>

int main()
{
    int a = 0;
    scanf("%d", &a);

    int min = -1;
    int max = -1;
    while(a > 9)
    {
        if(min < 0 || a % 10 < min)
            min = a % 10;
        if(max < 0 || a % 10 > max)
            max = a % 10;

        a /= 10;
    }
    if(min < 0 || a < min)
        min = a;
    if(max < 0 || a > max)
        max = a;

    printf("%d %d\n", min, max);
}
