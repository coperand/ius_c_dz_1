#include <stdio.h>

void reverse_string()
{
    char a = 0;
    scanf("%c", &a);

    if(a == '.')
        return;

    reverse_string();

    printf("%c", a);
}

int main()
{
    reverse_string();
    printf("\n");
}
