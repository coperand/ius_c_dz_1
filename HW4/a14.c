#include <stdio.h>

int main()
{
    int a = 0;
    scanf("%d", &a);

    int a1 = a / 100 % 10;
    int a2 = a / 10 % 10;
    int a3 = a % 10;

    if(a1 >= a2 && a1 >= a3)
        printf("%d\n", a1);
    else if(a2 >= a1 && a2 >= a3)
        printf("%d\n", a2);
    else
        printf("%d\n", a3);
}
