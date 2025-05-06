#include <stdio.h>

int main()
{
    int a = 0;
    scanf("%d", &a);

    int prev = -1;
    int cur = 0;
    for(int i = 0; i < a; i++)
    {
        if(i != 0)
            printf(" ");

        if(prev < 0)
        {
            printf("1");
            prev = 1;
            continue;
        }

        int new_cur = prev + cur;
        prev = cur ? cur : 1;
        cur = new_cur;

        printf("%d", cur);
    }
    printf("\n");
}
