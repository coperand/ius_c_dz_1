#include <stdio.h>
#include <string.h>

int main()
{
    FILE *ifile = fopen("input.txt", "r");
    if(!ifile)
        return -1;

    char s[1001];
    memset(s, 0, sizeof(s));
    int counter = 0;
    while(fscanf(ifile, "%1000s", s) == 1)
        if(s[strlen(s) - 1] == 'a')
            ++counter;

    fclose(ifile);

    FILE *ofile = fopen("output.txt", "w");
    if(!ofile)
        return -1;

    fprintf(ofile, "%d\n", counter);

    fclose(ofile);
}
