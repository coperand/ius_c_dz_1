#include <stdio.h>
#include <string.h>

int main()
{
    FILE *ifile = fopen("input.txt", "r");
    if(!ifile)
        return -1;

    char fname[101];
    char lname[101];
    memset(fname, 0, sizeof(fname));
    memset(lname, 0, sizeof(lname));
    fscanf(ifile, "%100s %100s %*s", fname, lname);

    fclose(ifile);

    FILE *ofile = fopen("output.txt", "w");
    if(!ofile)
        return -1;

    fprintf(ofile, "Hello, %s %s!\n", lname, fname);

    fclose(ofile);
}
