#include <stdio.h>

int main()
{
    int a = 0;
    int even_quantity = 0;
    do
    {
        scanf("%d", &a);
        if(a != 0 && (a % 2) == 0)
            ++even_quantity;
    }
    while(a != 0);

    printf("%d\n", even_quantity);
}
