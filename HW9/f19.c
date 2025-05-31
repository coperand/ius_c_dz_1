#include <stdio.h>
#include <string.h>

int main_avg(int a[5][5])
{
    return (a[0][0] + a[1][1] + a[2][2] + a[3][3] + a[4][4]) / 5;
}

int pos_bigger_avg(int a[5][5])
{
    int avg = main_avg(a);

    int counter = 0;
    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++)
            if(a[i][j] > 0 && a[i][j] > avg)
                counter++;

    return counter;
}

int main()
{
    int a[5][5];
    memset(a[0], 0, 5 * sizeof(int));
    memset(a[1], 0, 5 * sizeof(int));
    memset(a[2], 0, 5 * sizeof(int));
    memset(a[3], 0, 5 * sizeof(int));
    memset(a[4], 0, 5 * sizeof(int));
    scanf("%d %d %d %d %d", &a[0][0], &a[0][1], &a[0][2], &a[0][3], &a[0][4]);
    scanf("%d %d %d %d %d", &a[1][0], &a[1][1], &a[1][2], &a[1][3], &a[1][4]);
    scanf("%d %d %d %d %d", &a[2][0], &a[2][1], &a[2][2], &a[2][3], &a[2][4]);
    scanf("%d %d %d %d %d", &a[3][0], &a[3][1], &a[3][2], &a[3][3], &a[3][4]);
    scanf("%d %d %d %d %d", &a[4][0], &a[4][1], &a[4][2], &a[4][3], &a[4][4]);
    
    printf("%d\n", pos_bigger_avg(a));
}
