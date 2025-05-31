#include <stdio.h>
#include <string.h>

void f(int size, int a[])
{
    int even = 0, uneven = 0;

    for(int i = 0; i < size; i++)
    {
        if(a[i] % 2 == 0)
            even++;
        else
            uneven++;
    }

    if(even > uneven)
    {
        for(int i = 0; i < size; i++)
        {
            if(a[i] % 2 == 0)
                continue;

            int result = 1;
            while(a[i] > 0)
            {
                int num = a[i] % 10;
                if(num % 2 != 0)
                    result *= num;
                a[i] /= 10;
            }
            if(a[i] > 0 && (a[i] % 10) % 2 != 0)
                result *= a[i] % 10;

            a[i] = result;
        }
    }
    else
    {
        for(int i = 0; i < size; i++)
        {
            if(a[i] % 2 != 0)
                continue;

            int result = 1;
            while(a[i] > 0)
            {
                int num = a[i] % 10;
                if(num % 2 == 0)
                    result *= num;
                a[i] /= 10;
            }
            if(a[i] > 0 && (a[i] % 10) % 2 == 0)
                result *= a[i] % 10;

            a[i] = result;
        }
    }
}

int main()
{
    int a[10];
    memset(a, 0, sizeof(a));

    scanf("%d %d %d %d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8], &a[9]);

    f(10, a);

    for(int i = 0; i < 10; i++)
    {
        if(i != 0)
            printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
}
