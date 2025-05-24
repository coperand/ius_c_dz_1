#include <stdio.h>
#include <string.h>

int main()
{
    int a[10];
    memset(&a, 0, sizeof(a));
    scanf("%d %d %d %d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8], &a[9]);

    int first = 1;
    for (int i = 0; i < 10; i++)
    {
        int mirrored_pos = -1;
        if(i < 2)
            mirrored_pos = 4 - i;
        else if(i > 4 && i < 7)
            mirrored_pos = 14 - i;

        if(mirrored_pos >= 0)
        {
            int temp = a[i];
            a[i] = a[mirrored_pos];
            a[mirrored_pos] = temp;
        }

        if(!first)
            printf(" ");
        first = 0;
        printf("%d", a[i]);
    }
    printf("\n");
}
