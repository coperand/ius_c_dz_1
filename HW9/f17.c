#include <stdio.h>
#include <string.h>

int matrix_trace(int a[5][5])
{
    int trace = 0;
    for(int i = 0; i < 5; i++)
        trace += a[i][i];

    return trace;
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
    
    printf("%d\n", matrix_trace(a));
}
