#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int a[10];
    memset(&a, 0, sizeof(a));
    scanf("%d %d %d %d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8], &a[9]);

    int min = INT_MAX;
    int min_index = 10;
    int max = INT_MIN;
    int max_index = 10;
    for(int i = 0; i < 10; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
            min_index = i;
        }
        if(a[i] > max)
        {
            max = a[i];
            max_index = i;
        }
    }

    printf("%d %d %d %d\n", max_index + 1, max, min_index + 1, min);
}
