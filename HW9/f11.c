#include <stdio.h>
#include <string.h>
#include <limits.h>

void min_sum_pair(int size, int a[])
{
    int min_sum = INT_MAX;
    int index1 = 0, index2 = 1;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            int current_sum = a[i] + a[j];
            if (current_sum < min_sum)
            {
                min_sum = current_sum;
                index1 = i;
                index2 = j;
            }
        }
    }

    printf("%d %d\n", (index1 < index2) ? index1 : index2, (index1 < index2) ? index2 : index1);
}

int main()
{
    int a[30];
    memset(a, 0, sizeof(a));

    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8], &a[9],
                                                                                            &a[10], &a[11], &a[12], &a[13], &a[14], &a[15], &a[16], &a[17], &a[18], &a[19],
                                                                                            &a[20], &a[21], &a[22], &a[23], &a[24], &a[25], &a[26], &a[27], &a[28], &a[29]);

    min_sum_pair(30, a);
}
