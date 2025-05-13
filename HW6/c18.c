#include <stdio.h>

int is_digit(char c)
{
    return c >= '0' && c <= '9';
}

int main()
{
    char a = '.';
    int digits = 0;
    do
    {
        scanf("%c", &a);

        if(a != '.' && is_digit(a))
            ++digits;
    }
    while(a != '.');

    printf("%d\n", digits);
}
