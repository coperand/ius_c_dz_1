#include <stdio.h>

int count_between(int from, int to, int size, int a[])
{
    int counter = 0;
    for(int i = 0; i < size; i++)
        if(a[i] >= from && a[i] <= to)
            ++counter;

    return counter;
}

/* int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("%d\n", count_between(4, 6, sizeof(a) / sizeof(int), a));
} */
