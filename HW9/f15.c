#include <stdio.h>
#include <limits.h>

int count_bigger_abs(int n, int a[])
{
    int max = INT_MIN;
    for(int i = 0; i < n; i++)
        if(a[i] > max)
            max = a[i];

    int counter = 0;
    for(int i = 0; i < n; i++)
    {
        if((a[i] >= 0 && a[i] > max) || (a[i] < 0 && (-1 * a[i]) > max))
            counter++;
    }

    return counter;
}

/* int main()
{
    int a[] = {1, -20, 3, 4, -50, 6, 7, 8, 9, 10};

    printf("%d\n", count_bigger_abs(sizeof(a) / sizeof(int), a));
} */
