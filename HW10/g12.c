#include <stdio.h>
#include <string.h>

int main()
{
    FILE *ifile = fopen("input.txt", "r");
    if(!ifile)
        return -1;
    FILE *ofile = fopen("output.txt", "w");
    if(!ofile)
        return -1;

    char s[1001];
    memset(s, 0, sizeof(s));
    while(fscanf(ifile, "%1000s", s) == 1)
    {
        fprintf(ofile, "%s\n", s);
    }

    fclose(ifile);
    fclose(ofile);
}
