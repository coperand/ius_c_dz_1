#include <stdio.h>

int is_two_same(int size, int a[])
{
    int same = 0;
    for(int i = 0; i < size; i++)
    {
        for(int j = i + 1; j < size; j++)
            if(a[i] == a[j])
            {
                same = 1;
                break;
            }

        if(same)
            break;
    }

    return same;
}

/* int main()
{
    int a[] = {1, 2, 3, 4, 5};

    printf("%s\n", is_two_same(sizeof(a) / sizeof(int), a) ? "YES" : "NO");
} */
