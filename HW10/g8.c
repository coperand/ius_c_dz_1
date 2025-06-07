#include <stdio.h>
#include <string.h>

int main()
{
    FILE *ifile = fopen("input.txt", "r");
    if(!ifile)
        return -1;

    char s[1001];
    memset(s, 0, sizeof(s));
    fscanf(ifile, "%1000[^\n]", s);

    fclose(ifile);

    int count = 0;
    int i = 0;
    int numbers[1000];
    memset(numbers, 0, sizeof(numbers));
    while(s[i] != '\0')
    {
        if(s[i] < '0' || s[i] > '9')
        {
            i++;
            continue;
        }

        int num = 0;
        while(s[i] >= '0' && s[i] <= '9')
        {
            num = num * 10 + (s[i] - '0');
            i++;
        }
        numbers[count++] = num;
    }

    for(int i = 0; i < count - 1; i++)
    {
        for(int j = 0; j < count - i - 1; j++)
        {
            if(numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    FILE *ofile = fopen("output.txt", "w");
    if(!ofile)
        return -1;

    for(int i = 0; i < count; i++)
    {
        if(i != 0)
            fprintf(ofile, " ");
        fprintf(ofile, "%d", numbers[i]);
    }
    fprintf(ofile, "\n");

    fclose(ofile);
}
