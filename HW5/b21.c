#include <stdio.h>

int main()
{
    char a = '.';
    do
    {
        scanf("%c", &a);
        if(a >= 'A' && a <= 'Z')
            a -= 'A' - 'a';

        if(a != '.')
            printf("%c", a);
    }
    while(a != '.');
    printf("\n");
}
