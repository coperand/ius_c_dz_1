#include <stdio.h>
#include <string.h>

int main()
{
    int a[10];
    memset(&a, 0, sizeof(a));
    scanf("%d %d %d %d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8], &a[9]);

    int first = 1;
    int prev = 0;
    for(int i = 0; i < 10; i++)
    {
        int shift_pos = (i + 1) % 10;

        if(i == 0)
            prev = a[i];

        int temp = a[shift_pos];
        a[shift_pos] = prev;
        prev = temp;
    }

    for(int i = 0; i < 10; i++)
    {
        if(!first)
            printf(" ");
        first = 0;
        printf("%d", a[i]);
    }
    printf("\n");
}
