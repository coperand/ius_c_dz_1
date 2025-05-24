#include <stdio.h>
#include <string.h>

int main()
{
    int a = 0;
    scanf("%d", &a);

    int counts[10];
    memset(&counts, 0, sizeof(counts));
    
    for(int num = 2; num <= a; num++)
        for(int divisor = 2; divisor <= 9; divisor++)
            if(num % divisor == 0)
                counts[divisor]++;
    
    for(int divisor = 2; divisor <= 9; divisor++)
        printf("%d %d\n", divisor, counts[divisor]);
}
