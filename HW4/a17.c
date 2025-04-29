#include <stdio.h>

int main()
{
    int a = 0;
    scanf("%d", &a);

    if(a <= 2 || a == 12)
        printf("winter\n");
    else if(a >= 3 && a <= 5)
        printf("spring\n");
    else if(a >= 6 && a <= 8)
        printf("summer\n");
    else if(a >= 9 && a <= 11)
        printf("autumn\n");
}
