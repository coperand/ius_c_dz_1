#include <stdio.h>

int to_upper(int c)
{
    return (c >= 'a' && c <= 'z') ? c + ('A' - 'a') : c;
}

int main()
{
    char a = '.';
    do
    {
        scanf("%c", &a);

        if(a != '.')
            printf("%c", to_upper(a));
    }
    while(a != '.');
    printf("\n");
}
