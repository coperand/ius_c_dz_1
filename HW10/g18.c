#include <stdio.h>
#include <string.h>

void remove_excess_spaces(char s[])
{
    int found_non_space = 0;
    for(int i = 0; i < strlen(s) - 1; i++)
    {
        if(s[i] == 0)
            break;

        if(s[i] != ' ')
        {
            found_non_space = 1;
            continue;
        }

        if(!found_non_space)
        {
            for(int j = i; j < strlen(s); j++)
                s[j] = s[j + 1];
            i--;
            continue;
        }

        if(s[i + 1] == ' ')
        {
            for(int j = i + 1; j < strlen(s); j++)
                s[j] = s[j + 1];
            i--;
            continue;
        }
    }
}

int main()
{
    FILE *ifile = fopen("input.txt", "r");
    if(!ifile)
        return -1;

    char s[1001];
    memset(s, 0, sizeof(s));
    fscanf(ifile, "%1000[^\n]", s);

    fclose(ifile);

    remove_excess_spaces(s);

    FILE *ofile = fopen("output.txt", "w");
    if(!ofile)
        return -1;

    fprintf(ofile, "%s\n", s);

    fclose(ofile);
}
