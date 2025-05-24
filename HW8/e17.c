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
        int current_count = 0;
        for(int j = 0; j < 10; j++)
            if(a[j] == a[i])
                current_count++;
        
        if(current_count == 1)
        {
            if(!first)
                printf(" ");
            first = 0;
            printf("%d", a[i]);
        }
    }
    printf("\n");
}
