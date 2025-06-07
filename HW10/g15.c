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

    FILE *ofile = fopen("output.txt", "w");
    if(!ofile)
        return -1;

    for(int i = 0; i < strlen(s); i++)
    {
        if(strncmp(&s[i], "Cao", 3) == 0)
        {
            fprintf(ofile, "Ling");
            i += 2;
            continue;
        }

        fprintf(ofile, "%c", s[i]);
    }
    fprintf(ofile, "\n");

    fclose(ofile);
}
