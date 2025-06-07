#include <stdio.h>
#include <string.h>

int main()
{
    FILE *ifile = fopen("input.txt", "r");
    if(!ifile)
        return -1;

    char s1[101], s2[101];
    memset(s1, 0, sizeof(s1));
    memset(s2, 0, sizeof(s2));
    fscanf(ifile, "%100s %100s", s1, s2);

    fclose(ifile);

    int symbols[127];
    memset(symbols, 0, sizeof(symbols));
    for(int i = 33; i < 127; i++)
    {
        int count1 = 0, count2 = 0;
        for(int j = 0; j < 101; j++)
        {
            if(s1[j] == i)
                count1++;
            if(s2[j] == i)
                count2++;
        }

        if(count1 == 1 && count2 == 1)
            symbols[i] = 1;
    }

    FILE *ofile = fopen("output.txt", "w");
    if(!ofile)
        return -1;

    int first = 1;
    for(int i = 33; i < 127; i++)
    {
        if(symbols[i])
        {
            if(!first)
                fprintf(ofile, " ");
            first = 0;
            fprintf(ofile, "%c", i);
        }
    }
    fprintf(ofile, "\n");

    fclose(ofile);
}
