#include <stdio.h>

float sinus(float x)
{
    float x_rad = x * 3.14159 / 180.0;
    float term = x_rad;
    float sum = term;
    int counter = 1;
    while(term > 0.001 || term < -0.001)
    {
        counter += 2;
        term *= -1 * x_rad * x_rad / ((counter - 1) * counter);
        sum += term;
    }
    
    return sum;
}

int main()
{
    int a = 0;
    scanf("%d", &a);
    printf("%.3f\n", sinus(a));
}
