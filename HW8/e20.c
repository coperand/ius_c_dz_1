#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;
    scanf("%d", &number);
    
    if(number == 0)
    {
        printf("0\n");
        return 0;
    }

    int temp = number;
    int digit_count = 0;
    while (temp != 0)
    {
        temp /= 10;
        digit_count++;
    }
    
    int* digits = calloc(digit_count, sizeof(int));
    if(!digits)
        return -1;

    temp = number;
    for (int i = digit_count - 1; i >= 0; i--) {
        digits[i] = temp % 10;
        temp /= 10;
    }

    for(int i = 0; i < digit_count - 1; i++)
    {
        for(int j = 0; j < digit_count - i - 1; j++)
        {
            if(digits[j] < digits[j + 1])
            {
                int temp = digits[j];
                digits[j] = digits[j + 1];
                digits[j + 1] = temp;
            }
        }
    }

    int max_number = 0;
    for(int i = 0; i < digit_count; i++)
        max_number = max_number * 10 + digits[i];

    printf("%d\n", max_number);

    free(digits);
}
