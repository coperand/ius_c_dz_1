#include <stdio.h>

void print_sequence(int k, int count, int n)
{
    if (n <= 0)
        return;
    
    printf("%d ", k);
    
    if (count + 1 >= k)
        print_sequence(k + 1, 0, n - 1);
    else
        print_sequence(k, count + 1, n - 1);
}

int main()
{
    int a = 0;
    scanf("%d", &a);
    print_sequence(1, 0, a);
    printf("\n");
}
