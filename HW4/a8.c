#include <stdio.h>

int main()
{
    int array[3];
    scanf("%d %d %d", &array[0], &array[1], &array[2]);

    int max = array[0];
    for(int i = 1; i < 3; i++)
        if(array[i] > max)
            max = array[i];

    printf("%d\n", max);
}
