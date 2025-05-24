#include <stdio.h>
#include <string.h>

int main()
{
    int a[5];
    memset(&a, 0, sizeof(a));
    scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);

    float avg = (a[0] + a[1] + a[2] + a[3] + a[4]) / 5.0;
    printf("%.3f\n", avg);
}
