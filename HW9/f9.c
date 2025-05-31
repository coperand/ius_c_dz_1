#include <stdio.h>

void swap_negmax_last(int size, int a[])
{
    int negmax = 0;
    int negmax_position = 0;
    for(int i = 0; i < size; i++)
    {
        if(a[i] < 0 && (a[i] > negmax || negmax == 0))
        {
            negmax = a[i];
            negmax_position = i;
        }
    }

    if(negmax == 0)
        return;

    int temp = a[size - 1];
    a[size - 1] = a[negmax_position];
    a[negmax_position] = temp;
}

/* int main()
{
    int a[] = {1, -2, -3, -4, 5, 6, 7, 8, 9, 10};

    swap_negmax_last(sizeof(a) / sizeof(int), a);

    for(int i = 0; i < sizeof(a) / sizeof(int); i++)
        printf("%d ", a[i]);
    printf("\n");
} */
