#include <stdio.h>

int main()
{
    int a = 0;
    scanf("%d", &a);

    int found_uneven = 0;
    while(a > 9)
    {
        if( (a % 10) % 2 != 0)
        {
            found_uneven = 1;
            break;
        }

        a /= 10;
    }

    if(a % 2 != 0)
        found_uneven = 1;

    printf("%s\n", !found_uneven ? "YES" : "NO");
}
