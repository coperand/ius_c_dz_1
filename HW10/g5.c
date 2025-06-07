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

    for(int i = 0; i < 1001; i++)
    {
        if(s[i] == 'a')
            s[i] = 'b';
        else if(s[i] == 'b')
            s[i] = 'a';
        else if(s[i] == 'A')
            s[i] = 'B';
        else if(s[i] == 'B')
            s[i] = 'A';
    }

    FILE *ofile = fopen("output.txt", "w");
    if(!ofile)
        return -1;

    fprintf(ofile, "%s\n", s);

    fclose(ofile);
}
