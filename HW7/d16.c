#include <stdio.h>

int is2pow(int n)
{
    if(n == 1)
        return 1;

    if( n == 0 || n % 2 != 0)
        return 0;
    
    return is2pow(n / 2);
}

int main()
{
    int a = 0;
    scanf("%d", &a);
    printf("%s\n", is2pow(a) ? "YES" : "NO");
}
