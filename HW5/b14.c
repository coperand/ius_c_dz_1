#include <stdio.h>

int main()
{
    int a = 0;
    int quantity = 0;
    do
    {
        scanf("%d", &a);
        if(a != 0)
            ++quantity;
    }
    while(a != 0);

    printf("%d\n", quantity);
}
