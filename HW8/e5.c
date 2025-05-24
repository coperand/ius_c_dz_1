#include <stdio.h>
#include <string.h>

int main()
{
    int a[10];
    memset(&a, 0, sizeof(a));
    scanf("%d %d %d %d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8], &a[9]);

    int positive_sum = 0;
    for(int i = 0; i < 10; i++)
        if(a[i] > 0)
            positive_sum += a[i];

    printf("%d\n", positive_sum);
}
