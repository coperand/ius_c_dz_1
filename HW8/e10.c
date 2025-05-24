#include <stdio.h>
#include <string.h>

int main()
{
    int a[12];
    memset(&a, 0, sizeof(a));
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8], &a[9], &a[10], &a[11]);

    int temp[4];

    for(int i = 0; i < 4; i++)
        temp[i] = a[12 - 4 + i];
    for(int i = 11; i >= 4; i--)
        a[i] = a[i - 4];
    for (int i = 0; i < 4; i++)
        a[i] = temp[i];

    int first = 1;
    for(int i = 0; i < 12; i++)
    {
        if(!first)
            printf(" ");
        first = 0;
        printf("%d", a[i]);
    }
    printf("\n");
}
