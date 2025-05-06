#include <stdio.h>

int main()
{
    int a = 0;
    scanf("%d", &a);

    int simple = (a < 2) ? 0 : 1;
    for(int i = 2; i < a; i++)
    {
        if(a % i == 0)
        {
            simple = 0;
            break;
        }
    }

    printf("%s\n", simple ? "YES" : "NO");
}
