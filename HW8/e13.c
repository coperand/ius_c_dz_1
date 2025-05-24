#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a[10];
    memset(&a, 0, sizeof(a));
    scanf("%d %d %d %d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8], &a[9]);

    //Подсчитываем количество
    int quantity = 0;
    for(int i = 0; i < 10; i++)
    {
        if(a[i] / 10 % 10 == 0)
            ++quantity;
    }

    //Выделяем память
    int* new_a = calloc(quantity, sizeof(int));
    if(!new_a)
        return -1;

    //Наполняем массив
    int position = 0;
    for(int i = 0; i < 10; i++)
    {
        if(a[i] / 10 % 10 == 0)
            new_a[position++] = a[i];
    }

    int first = 1;
    for(int i = 0; i < quantity; i++)
    {
        if(!first)
            printf(" ");
        first = 0;
        printf("%d", new_a[i]);
    }
    printf("\n");

    //Освобождаем память
    free(new_a);
}
