#include <stdio.h>

void print_uneven()
{
    static int first = 1;

    int a = 0;
    scanf("%d", &a);

    if(a == 0)
        return;

    if(a % 2 != 0)
    {
        if(!first)
            printf(" ");
        first = 0;
        printf("%d", a);
    }

    print_uneven();
}

int main()
{
    print_uneven();
    printf("\n");
}
