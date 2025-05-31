#include <stdio.h>
#include <string.h>

int compression(int a[], int b[], int N)
{
    int position = 0;
    int zeroes = 1;
    int counter = 0;
    for(int i = 0; i < N; i++)
    {
        if((zeroes && a[i] != 0) || (!zeroes && a[i] != 1))
        {
            zeroes = !zeroes;
            b[position++] = counter;
            counter = 0;
        }

        if((zeroes && a[i] == 0) || (!zeroes && a[i] == 1))
            ++counter;
    }

    if(counter)
        b[position++] = counter;

    return position;
}

/* int main()
{
    int a[] = {1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 1, 1, 1, 0, 1, 1, 0, 1, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0};
    int b[sizeof(a) / sizeof(int)];
    memset(b, 0, sizeof(b));

    int result_size = compression(a, b, sizeof(a) / sizeof(int)); 
    printf("%d: [", result_size);
    for(int i = 0; i < result_size; i++)
    {
        if(i != 0)
            printf(" ");
        printf("%d", b[i]);
    }
    printf("]\n");
} */
