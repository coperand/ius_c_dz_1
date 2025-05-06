#include <stdio.h>

int main()
{
    int a = 0, b =0;
    scanf("%d %d", &a, &b);

    int sum = 0;
    for(int i = a; i <= b; i++)
        sum += i * i;
    printf("%d\n", sum);
}
