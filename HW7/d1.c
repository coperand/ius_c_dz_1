#include <stdio.h>

void print_number(int n)
{
    static int first = 1;

    if(n != 1)
        print_number(n - 1);

    if(!first)
        printf(" ");
    printf("%d", n);
    first = 0;
}

int main()
{
    int a = 0;
    scanf("%d", &a);
    print_number(a);
    printf("\n");
}
