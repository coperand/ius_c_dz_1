#include <stdio.h>

int main()
{
    int a = 0;
    scanf("%d", &a);

    int num_9_times = 0;
    while(a > 9)
    {
        if(a % 10 == 9)
            ++num_9_times;

        a /= 10;
    }

    if(a == 9)
        ++num_9_times;

    printf("%s\n", (num_9_times == 1) ? "YES" : "NO");
}
