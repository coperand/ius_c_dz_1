#include <stdio.h>

int main()
{
    int a = 0;
    scanf("%d", &a);
    
    int quantity = 0;
    int temp = a;
    while(temp > 0)
    {
        ++quantity;
        temp /= 10;
    }

    int first = 1;
    for(int i = quantity; i > 0; i--)
    {
        int temp = a;
        int j = i - 1;
        while(j > 0)
        {
            --j;
            temp /= 10;
        }

        if(!first)
            printf(" ");
        first = 0;
        printf("%d", temp % 10);
    }
    printf("\n");
    
    return 0;
}
