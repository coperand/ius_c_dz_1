#include <stdio.h>

void sort_array(int size, int a[])
{
    for(int i = 0; i < size - 1; i++)
    {
        if(a[i] > a[i + 1])
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
    }
}

/* int main()
{
    int a[] = {20, 19, 4, 3, 2, 1, 18, 17, 13, 12, 11, 16, 15, 14, 10, 9, 8, 7, 6, 5};

    sort_array(sizeof(a) / sizeof(int), a);

    for(int i = 0; i < sizeof(a) / sizeof(int); i++)
        printf("%d ", a[i]);
    printf("\n");
} */
