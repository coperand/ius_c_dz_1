#include <stdio.h>
#include <string.h>

int main()
{
    FILE *ifile = fopen("input.txt", "r");
    if(!ifile)
        return -1;

    int n = 0;
    fscanf(ifile, "%d", &n);

    fclose(ifile);

    
    char s[27];
    memset(s, 0, sizeof(s));

    int digit = 2;
    char letter = 'A';
    for(int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            s[i] = letter;
            letter++;
        }
        else
        {
            s[i] = digit + '0';
            digit = (digit + 2 > 8) ? 2 : digit + 2;
        }
    }


    FILE *ofile = fopen("output.txt", "w");
    if(!ofile)
        return -1;

    fprintf(ofile, "%s\n", s);

    fclose(ofile);
}
