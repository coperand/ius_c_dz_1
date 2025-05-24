#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a[10];
    memset(&a, 0, sizeof(a));
    scanf("%d %d %d %d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8], &a[9]);

    //Подсчитываем количества
    int quantity_pos = 0, quantity_neg = 0;
    for(int i = 0; i < 10; i++)
    {
        if(a[i] > 0)
            ++quantity_pos;
        else if(a[i] < 0)
            ++quantity_neg;
    }

    //Выделяем память
    int* a_pos = calloc(quantity_pos, sizeof(int));
    if(!a_pos)
        return -1;
    int* a_neg = calloc(quantity_neg, sizeof(int));
    if(!a_neg)
        return -1;

    //Наполняем массивы
    int position_pos = 0, position_neg = 0;
    for(int i = 0; i < 10; i++)
    {
        if(a[i] > 0)
            a_pos[position_pos++] = a[i];
        else if(a[i] < 0)
            a_neg[position_neg++] = a[i];
    }

    int first = 1;
    for(int i = 0; i < quantity_pos; i++)
    {
        if(!first)
            printf(" ");
        first = 0;
        printf("%d", a_pos[i]);
    }
    for(int i = 0; i < quantity_neg; i++)
    {
        if(!first)
            printf(" ");
        first = 0;
        printf("%d", a_neg[i]);
    }
    printf("\n");

    //Освобождаем память
    free(a_pos);
    free(a_neg);
}
