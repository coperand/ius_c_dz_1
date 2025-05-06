#include <stdio.h>

int main()
{
    int a = 0;
    scanf("%d", &a);

    int reversed = 0;
    while(a > 9)
    {
        if(reversed)
            reversed *= 10;
        reversed += a % 10;
        a /= 10;
    }
    if(reversed)
        reversed *= 10;
    reversed += a;

    printf("%d\n", reversed);
}
