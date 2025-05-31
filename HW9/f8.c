#include <stdio.h>
#include <string.h>

int main()
{
    int nums[1000];
    memset(nums, 0, sizeof(nums));

    int a = 0;
    do
    {
        scanf("%d", &a);
        if(a != 0)
            nums[a]++;
    }
    while(a != 0);

    int found_first = 0;
    for(int i = 0; i < 1000; i++)
    {
        if(found_first && nums[i] == 0)
        {
            printf("%d\n", i);
            break;
        }

        if(!found_first && nums[i] != 0)
            found_first = 1;
    }
}
