#include <stdio.h>

int main()
{
    int a = 0;
    scanf("%d", &a);

    int min = -1;
    int found_incorrect = 0;
    while(a > 9)
    {
        if(min >= 0 && a % 10 >= min)
        {
            found_incorrect = 1;
            break;
        }

        min = a % 10;
        a /= 10;
    }
    if(min >= 0 && a >= min)
        found_incorrect = 1;

    printf("%s\n", !found_incorrect ? "YES" : "NO");
}
