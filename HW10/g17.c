#include <stdio.h>
#include <string.h>

void swap_ignoring_spaces(char s[])
{
    int len = strlen(s);
    int prev_char_pos = -1;
    
    for(int i = 0; i < len; i++)
    {
        if(s[i] == ' ')
            continue;

        if(prev_char_pos == -1)
        {
            prev_char_pos = i;
            continue;
        }

        char temp = s[prev_char_pos];
        s[prev_char_pos] = s[i];
        s[i] = temp;
        prev_char_pos = -1;
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

    swap_ignoring_spaces(s);

    FILE *ofile = fopen("output.txt", "w");
    if(!ofile)
        return -1;

    fprintf(ofile, "%s\n", s);

    fclose(ofile);
}
