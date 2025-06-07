#include <stdio.h>
#include <string.h>

int main()
{
    FILE *ifile = fopen("input.txt", "r");
    if(!ifile)
        return -1;

    char s[10001];
    memset(s, 0, sizeof(s));
    fscanf(ifile, "%10000[^\n]", s);

    fclose(ifile);

    int lower = 0, upper = 0;
    for(int i = 0; i < 10001; i++)
    {
        if(s[i] == 0)
            break;

        if(s[i] >= 'a' && s[i] <= 'z')
            lower++;
        else if(s[i] >= 'A' && s[i] <= 'Z')
            upper++;
    }

    FILE *ofile = fopen("output.txt", "w");
    if(!ofile)
        return -1;

    fprintf(ofile, "%d %d\n", lower, upper);

    fclose(ofile);
}
