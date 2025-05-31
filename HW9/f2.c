#include <stdio.h>

void sort_even_odd(int n, int a[])
{
    for(int i = 0; i < n - 1; i++)
    {
        if((a[i] % 2) != 0 && (a[i + 1] % 2) == 0)
        {
            int temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;

            for(int j = i - 1; j >= 0; j--)
            {
                if((a[j] % 2) != 0 && (a[j + 1] % 2) == 0)
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
    int a[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    sort_even_odd(sizeof(a) / sizeof(int), a);

    for(int i = 0; i < sizeof(a) / sizeof(int); i++)
        printf("%d ", a[i]);
    printf("\n");
} */
