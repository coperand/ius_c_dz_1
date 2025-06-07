#include <stdio.h>

int count_stars_in_triangle(int n)
{
    return n * (n + 1) / 2;
}

void print_triangle(int n, FILE *output)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < n - i; j++)
            fprintf(output, " ");

        for(int j = 0; j < i; j++) {
            fprintf(output, "*");

            if(j < i - 1)
                fprintf(output, " ");
        }

        fprintf(output, "\n");
    }
}

int main()
{
    FILE *ifile = fopen("input.txt", "r");
    if(!ifile)
        return -1;

    int star_count = 0;
    char c;
    while((c = fgetc(ifile)) != EOF)
        if(c == '*')
            star_count++;

    fclose(ifile);

    int n = 0;
    while(count_stars_in_triangle(n) <= star_count)
    {
        if(count_stars_in_triangle(n) == star_count)
            break;
        n++;
    }

    FILE *ofile = fopen("output.txt", "w");
    if(!ofile)
        return -1;

    if(count_stars_in_triangle(n) == star_count && n > 0)
        print_triangle(n, ofile);
    else
        fprintf(ofile, "NO\n");

    fclose(ofile);
}
