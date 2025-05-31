#include <stdio.h>

int sum_between_ab(int from, int to, int size, int a[])
{
    int sum = 0;
    for(int i = 0; i < size; i++)
        if((a[i] >= from && a[i] <= to) || (a[i] >= to && a[i] <= from))
            sum += a[i];

    return sum;
}

/* int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("%d\n", sum_between_ab(4, 6, sizeof(a) / sizeof(int), a));
} */
