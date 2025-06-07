#include <stdio.h>
#include <string.h>

int main()
{
    FILE *ifile = fopen("input.txt", "r");
    if(!ifile)
        return -1;

    char s[1001];
    memset(s, 0, sizeof(s));
    char s_max[1001];
    memset(s_max, 0, sizeof(s_max));
    while(fscanf(ifile, "%1000s", s) == 1)
        if(strlen(s) > strlen(s_max))
            strncpy(s_max, s, 1000);

    fclose(ifile);

    FILE *ofile = fopen("output.txt", "w");
    if(!ofile)
        return -1;

    fprintf(ofile, "%s\n", s_max);

    fclose(ofile);
}
