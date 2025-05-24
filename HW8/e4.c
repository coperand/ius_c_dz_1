#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int a[10];
    memset(&a, 0, sizeof(a));
    scanf("%d %d %d %d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8], &a[9]);

    int max1 = INT_MIN, max2 = INT_MIN;
    for(int i = 0; i < 10; i++)
    {
        if (a[i] > max1)
        {
            max2 = max1;
            max1 = a[i];
        }
        else if (a[i] > max2)
            max2 = a[i];
    }

    printf("%d\n", max1 + max2);
}
