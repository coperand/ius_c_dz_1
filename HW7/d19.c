#include <stdio.h>

int acounter()
{
    char a = 0;
    scanf("%c", &a);

    if(a == '.')
        return 0;

    return (a == 'a') + acounter();
}

int main()
{
    printf("%d\n", acounter());
}
