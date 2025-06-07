#include <stdio.h>
#include <string.h>

int get_last_position(char s[], char symbol)
{
    for(int i = strlen(s) - 1; i >= 0; i--)
    {
        if(s[i] == symbol)
            return i;
    }

    return -1;
}

int main()
{
    FILE *ifile = fopen("input.txt", "r");
    if(!ifile)
        return -1;

    char s[10001];
    memset(s, 0, sizeof(s));
    fscanf(ifile, "%10000[^\n]", s);

    fclose(ifile);

    int slash_pos = get_last_position(s, '/');

    int dot_pos = get_last_position(&s[slash_pos + 1], '.');
    if(dot_pos == -1)
        dot_pos = strlen(s);
    else
        dot_pos += slash_pos + 1;

    memset(&s[dot_pos], 0, strlen(s) - dot_pos);
    s[dot_pos] = '.';
    s[dot_pos + 1] = 'h';
    s[dot_pos + 2] = 't';
    s[dot_pos + 3] = 'm';
    s[dot_pos + 4] = 'l';

    FILE *ofile = fopen("output.txt", "w");
    if(!ofile)
        return -1;

    fprintf(ofile, "%s\n", s);

    fclose(ofile);
}
