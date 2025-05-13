#include <stdio.h>

float cosinus(float x)
{
    float x_rad = x * 3.14159 / 180.0;
    float term = 1.0;
    float sum = term;
    float x_squared = x_rad * x_rad;
    int counter = 0;
    while(term > 0.001 || term < -0.001)
    {
        counter += 2;
        term *= -1 * x_squared / ((counter - 1) * counter);
        sum += term;
    }
    
    return sum;
}

int main()
{
    int a = 0;
    scanf("%d", &a);
    printf("%.3f\n", cosinus(a));
}
