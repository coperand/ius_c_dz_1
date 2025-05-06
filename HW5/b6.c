#include <stdio.h>

int main()
{
    int a = 0;
    scanf("%d", &a);

    int prev = -1;
    int found = 0;
    while(a > 9)
    {
        if(prev >= 0 && a % 10 == prev)
        {
            found = 1;
            break;
        }

        prev = a % 10;
        a /= 10;
    }
    if(prev >= 0 && a == prev)
        found = 1;

    printf("%s\n", found ? "YES" : "NO");
}
