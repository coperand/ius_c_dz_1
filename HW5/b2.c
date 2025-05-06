#include <stdio.h>

int main()
{
    int a = 0, b =0;
    scanf("%d %d", &a, &b);

    for(int i = a; i <= b; i++)
    {
        if(i != a)
            printf(" ");
        printf("%d", i * i);
    }
    printf("\n");
}
