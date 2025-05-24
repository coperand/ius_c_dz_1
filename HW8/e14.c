#include <stdio.h>
#include <string.h>

int main()
{
    int a[10];
    memset(&a, 0, sizeof(a));
    scanf("%d %d %d %d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8], &a[9]);

    int result[10];
    memset(&result, 0, sizeof(result));
    int result_size = 0;
    
    for(int i = 0; i < 10; i++)
    {
        int count = 1;
        for(int j = 0; j < 10; j++)
        {
            if(i != j && a[i] == a[j])
            {
                count++;
                break;
            }
        }
        
        if (count > 1)
        {
            int already_exists = 0;
            for (int k = 0; k < result_size; k++)
            {
                if (a[i] == result[k])
                {
                    already_exists = 1;
                    break;
                }
            }
            
            if (!already_exists)
                result[result_size++] = a[i];
        }
    }

    for(int i = 0; i < result_size; i++)
    {
        if(i != 0)
            printf(" ");
        printf("%d", result[i]);
    }
    printf("\n");
}
