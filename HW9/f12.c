#include <stdio.h>
#include <limits.h>

void change_max_min(int size, int a[])
{
    int min = INT_MAX, max = INT_MIN;
    int min_position = -1, max_position = -1;
    for(int i = 0; i < size; i++)
    {
        if(a[i] < min || min_position == -1)
        {
            min = a[i];
            min_position = i;
        }
        if(a[i] > max || max_position == -1)
        {
            max = a[i];
            max_position = i;
        }
    }

    if(min_position == -1 || max_position == -1)
        return;

    int temp = a[min_position];
    a[min_position] = a[max_position];
    a[max_position] = temp;
}

/* int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    change_max_min(sizeof(a) / sizeof(int), a);

    for(int i = 0; i < sizeof(a) / sizeof(int); i++)
        printf("%d ", a[i]);
    printf("\n");
} */
