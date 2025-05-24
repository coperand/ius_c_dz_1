#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    int a[5];
    memset(&a, 0, sizeof(a));
    scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);

    int min = INT_MAX;
    for(int i = 0; i < 5; i++)
        if(a[i] < min)
            min = a[i];

    printf("%d\n", min);
}
