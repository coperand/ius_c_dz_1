#include <stdio.h>
#include <string.h>

void digits_asc(int size, char s[])
{
    int nums[10];
    memset(nums, 0, sizeof(nums));

    for(int i = 0; i < size; i++)
    {
        if(s[i] < '0' || s[i] > '9')
            break;

        nums[(s[i] - '0') % 10]++;
    }

    for(int i = 0; i < 10; i++)
    {
        if(nums[i] == 0)
            continue;
        printf("%d %d\n", i, nums[i]);
    }
}

int main()
{
    char s[1001];
    memset(s, 0, sizeof(s));
    scanf("%1000s", s);

    digits_asc(1000, s);
}
