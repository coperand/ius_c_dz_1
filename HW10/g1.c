#include <stdio.h>
#include <string.h>

int main()
{
    FILE *ifile = fopen("input.txt", "r");
    if(!ifile)
        return -1;

    char s[101];
    memset(s, 0, sizeof(s));
    fscanf(ifile, "%100[^\n]", s);

    fclose(ifile);


    FILE *ofile = fopen("output.txt", "w");
    if(!ofile)
        return -1;

    fprintf(ofile, "%s, %s, %s %lu\n", s, s, s, strlen(s));

    fclose(ofile);
}
