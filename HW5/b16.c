#include <stdio.h>

int main()
{
    int a = 0, b =0;
    scanf("%d %d", &a, &b);

    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    printf("%d\n", a);
}
