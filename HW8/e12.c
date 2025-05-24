#include <stdio.h>
#include <string.h>

int main()
{
    int a[10];
    memset(&a, 0, sizeof(a));
    scanf("%d %d %d %d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8], &a[9]);

    for(int i = 0; i < 9; i++)
    {
        if(i < 4 && a[i] > a[i + 1])
        {
            int temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;

            for(int j = i - 1; j >= 0; j--)
            {
                if(a[j] > a[j + 1])
                {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
        else if(i > 4 && a[i] < a[i + 1])
        {
            int temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;

            for(int j = i - 1; j >= 5; j--)
            {
                if(a[j] < a[j + 1])
                {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
    }

    int first = 1;
    for(int i = 0; i < 10; i++)
    {
        if(!first)
            printf(" ");
        first = 0;
        printf("%d", a[i]);
    }
    printf("\n");
}
