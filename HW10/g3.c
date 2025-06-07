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

    char target_symbol = 0;
    int target_index = 0;
    for(int i = 1; i < 1001; i++)
    {
        if(s[i] == 0)
        {
            target_symbol = s[i - 1];
            target_index = i - 1;
            break;
        }
    }

    FILE *ofile = fopen("output.txt", "w");
    if(!ofile)
        return -1;

    int first = 1;
    for(int i = 0; i < target_index; i++)
    {
        if(s[i] == target_symbol)
        {
            if(!first)
                fprintf(ofile, " ");
            first = 0;
            fprintf(ofile, "%d", i);
        }
    }
    fprintf(ofile, "\n");

    fclose(ofile);
}
