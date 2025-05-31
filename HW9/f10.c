#include <stdio.h>

int main()
{
    char a = 0;
    char prev = 0;
    int counter = 1;
    do
    {
        scanf("%c", &a);
        if(a != '.')
        {
            if(prev == 0)
            {
                prev = a;
                printf("%c", a);
                continue;
            }

            if(prev != a)
            {
                printf("%d", counter);
                prev = a;
                counter = 1;
                printf("%c", a);
            }
            else
                ++counter;
        }
    }
    while(a != '.');

    if(counter)
        printf("%d", counter);
    printf("\n");
}
