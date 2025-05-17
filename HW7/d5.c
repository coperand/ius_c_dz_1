#include <stdio.h>

void dec_to_bin(int a, int first)
{
    if(a == 0)
    {
        if(first)
            printf("0");
        return;
    }
    
    dec_to_bin(a / 2, 0);
    printf("%d", a % 2);
}

int main()
{
    int a = 0;
    scanf("%d", &a);
    dec_to_bin(a, 1);
    printf("\n");
}
