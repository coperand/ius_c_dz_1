#include <stdio.h>

void print_num(int num)
{
    static int first = 1;

    if(num / 10)
        print_num(num / 10);

    if(!first)
        printf(" ");
    printf("%d", num % 10);
    first = 0;
}

int main()
{
    int a = 0;
    scanf("%d", &a);
    print_num(a);
    printf("\n");
}
