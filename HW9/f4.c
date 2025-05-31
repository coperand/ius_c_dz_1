#include <stdio.h>
#include <string.h>

void print_digit(char s[])
{
    int nums[10];
    memset(nums, 0, sizeof(nums));

    for(int i = 0; i < 100001; i++)
    {
        if(s[i] == 0)
            break;

        if(s[i] >= '0' && s[i] <= '9')
            nums[(s[i] - '0') % 10]++;
    }

    for(int i = 0; i < 10; i++)
    {
        if(nums[i] == 0)
            continue;
        printf("%d %d\n", i, nums[i]);
    }
}

/* int main()
{
    char s[100001];
    memset(s, 0, sizeof(s));
    scanf("%100000[^\n]", s);

    print_digit(s);
} */
