#include <stdio.h>

int grow_up(int n)
{
    int min = -1;
    int found_incorrect = 0;
    while(n > 9)
    {
        if(min >= 0 && n % 10 >= min)
        {
            found_incorrect = 1;
            break;
        }

        min = n % 10;
        n /= 10;
    }
    if(min >= 0 && n >= min)
        found_incorrect = 1;

    return !found_incorrect;
}

int main()
{
    int a = 0;
    scanf("%d", &a);
    printf("%s\n", grow_up(a) ? "YES" : "NO");
}
