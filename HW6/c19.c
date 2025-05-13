#include <stdio.h>

int digit_to_num(char c)
{
    return (c >= '0' && c <= '9') ? (c - '0') : 0;
}

int main()
{
    char a = '.';
    int sum = 0;
    do
    {
        scanf("%c", &a);

        if(a != '.')
            sum += digit_to_num(a);
    }
    while(a != '.');

    printf("%d\n", sum);
}
