#include <stdio.h>
#include <string.h>
#include <limits.h>

int matrix_max_sum(int a[10][10])
{
    int sum[10];
    memset(sum, 0, sizeof(sum));

    for(int i = 0; i < 10; i++)
    {
        sum[i] = INT_MIN;
        for(int j = 0; j < 10; j++)
            if(a[i][j] > sum[i])
                sum[i] = a[i][j];
    }

    return sum[0] + sum[1] + sum[2] + sum[3] + sum[4] + sum[5] + sum[6] + sum[7] + sum[8] + sum[9];
}

int main()
{
    int a[10][10];
    memset(a[0], 0, 10 * sizeof(int));
    memset(a[1], 0, 10 * sizeof(int));
    memset(a[2], 0, 10 * sizeof(int));
    memset(a[3], 0, 10 * sizeof(int));
    memset(a[4], 0, 10 * sizeof(int));
    memset(a[5], 0, 10 * sizeof(int));
    memset(a[6], 0, 10 * sizeof(int));
    memset(a[7], 0, 10 * sizeof(int));
    memset(a[8], 0, 10 * sizeof(int));
    memset(a[9], 0, 10 * sizeof(int));

    scanf("%d %d %d %d %d %d %d %d %d %d", &a[0][0], &a[0][1], &a[0][2], &a[0][3], &a[0][4], &a[0][5], &a[0][6], &a[0][7], &a[0][8], &a[0][9]);
    scanf("%d %d %d %d %d %d %d %d %d %d", &a[1][0], &a[1][1], &a[1][2], &a[1][3], &a[1][4], &a[1][5], &a[1][6], &a[1][7], &a[1][8], &a[1][9]);
    scanf("%d %d %d %d %d %d %d %d %d %d", &a[2][0], &a[2][1], &a[2][2], &a[2][3], &a[2][4], &a[2][5], &a[2][6], &a[2][7], &a[2][8], &a[2][9]);
    scanf("%d %d %d %d %d %d %d %d %d %d", &a[3][0], &a[3][1], &a[3][2], &a[3][3], &a[3][4], &a[3][5], &a[3][6], &a[3][7], &a[3][8], &a[3][9]);
    scanf("%d %d %d %d %d %d %d %d %d %d", &a[4][0], &a[4][1], &a[4][2], &a[4][3], &a[4][4], &a[4][5], &a[4][6], &a[4][7], &a[4][8], &a[4][9]);
    scanf("%d %d %d %d %d %d %d %d %d %d", &a[5][0], &a[5][1], &a[5][2], &a[5][3], &a[5][4], &a[5][5], &a[5][6], &a[5][7], &a[5][8], &a[5][9]);
    scanf("%d %d %d %d %d %d %d %d %d %d", &a[6][0], &a[6][1], &a[6][2], &a[6][3], &a[6][4], &a[6][5], &a[6][6], &a[6][7], &a[6][8], &a[6][9]);
    scanf("%d %d %d %d %d %d %d %d %d %d", &a[7][0], &a[7][1], &a[7][2], &a[7][3], &a[7][4], &a[7][5], &a[7][6], &a[7][7], &a[7][8], &a[7][9]);
    scanf("%d %d %d %d %d %d %d %d %d %d", &a[8][0], &a[8][1], &a[8][2], &a[8][3], &a[8][4], &a[8][5], &a[8][6], &a[8][7], &a[8][8], &a[8][9]);
    scanf("%d %d %d %d %d %d %d %d %d %d", &a[9][0], &a[9][1], &a[9][2], &a[9][3], &a[9][4], &a[9][5], &a[9][6], &a[9][7], &a[9][8], &a[9][9]);
    
    printf("%d\n", matrix_max_sum(a));
}
