#include <stdio.h>

int main()
{
    int array[5];
    scanf("%d %d %d %d %d", &array[0], &array[1], &array[2], &array[3], &array[4]);

    int min = array[0];
    for(int i = 1; i < 5; i++)
        if(array[i] < min)
            min = array[i];

    printf("%d\n", min);
}
