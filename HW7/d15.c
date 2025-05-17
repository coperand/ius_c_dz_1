#include <stdio.h>

int max_find()
{
    int a = 0;
    scanf("%d", &a);

    if(a == 0)
        return 0;

    int max = max_find();
    if(max == 0 || (a != 0 && a > max))
        max = a;
    return max;
}

int main()
{
    printf("%d\n", max_find());
}
