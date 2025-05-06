#include <stdio.h>

int main()
{
    int a = 0;
    scanf("%d", &a);

    int printed = 0;
    for(int i = 10; i <= a; i++)
    {
        //Делаем копию, чтобы спокойно её модифицировать
        int i_copy = i;

        int sum = 0;
        int mul = 1;
        while(i_copy > 9)
        {
            sum += i_copy % 10;
            mul *= i_copy % 10;

            i_copy /= 10;
        }
        sum += i_copy;
        mul *= i_copy;

        if(sum == mul)
        {
            if(!printed)
                printed = 1;
            else
                printf(" ");
            printf("%d", i);
        }
    }
    printf("\n");
}
