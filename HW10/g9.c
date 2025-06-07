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
        if(s[i] == 0)
            break;

        if(s[i] == ' ')
        {
            for(int k = i; k < 1000; k++)
            {
                if(s[k] == 0)
                    break;

                s[k] = s[k + 1];
            }
            i--;
            continue;
        }

        for(int j = i + 1; j < 1001; j++)
        {
            if(s[j] == 0)
                break;

            if(s[j] == s[i])
            {
                for(int k = j; k < 1000; k++)
                {
                    if(s[k] == 0)
                        break;

                    s[k] = s[k + 1];
                }
                j--;
                continue;
            }
        }
    }

    FILE *ofile = fopen("output.txt", "w");
    if(!ofile)
        return -1;

    fprintf(ofile, "%s\n", s);

    fclose(ofile);
}
