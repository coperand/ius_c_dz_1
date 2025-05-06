#include <stdio.h>

int main()
{
    int a = 0;
    scanf("%d", &a);

    int found = 0;
    for(int i = 0; i <= 10; i++)
    {
        //Делаем копию, чтобы спокойно модифицировать её
        int a_copy = a;

        int found_first = 0;
        while(a_copy > 9)
        {
            if(found_first && a_copy % 10 == i)
            {
                found = 1;
                break;
            }

            if(a_copy % 10 == i)
                found_first = 1;

            a_copy /= 10;
        }

        if(found)
            break;

        if(found_first && a_copy == i)
        {
            found = 1;
            break;
        }
    }


    printf("%s\n", found ? "YES" : "NO");
}
