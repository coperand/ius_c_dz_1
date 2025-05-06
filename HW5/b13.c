#include <stdio.h>

int main()
{
    int a = 0;
    scanf("%d", &a);

    int even = 0;
    int uneven = 0;
    while(a > 9)
    {
        if((a % 10) % 2 == 0)
            ++even;
        else
            ++uneven;

        a /= 10;
    }
    if(a % 2 == 0)
        ++even;
    else
        ++uneven;

    printf("%d %d\n", even, uneven);
}
