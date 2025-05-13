#include <stdio.h>

int f(int x)
{
    if(x >= -2 && x < 2)
        return x * x;
    else if(x >= 2)
        return x * x + 4 * x + 5;
    else
        return 4;
}

int main()
{
    int a = 0;
    int max = 0;
    do
    {
        scanf("%d", &a);
        if(a != 0)
        {
            int result = f(a);
            if(max == 0 || result > max)
                max = result;
        }
    }
    while(a != 0);

    printf("%d\n", max);
}
