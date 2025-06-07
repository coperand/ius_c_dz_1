#include <stdio.h>
#include <string.h>

int is_palindrom(char s[])
{
    int left = 0;
    int right = strlen(s) - 1;

    while(left < right)
    {
        if(s[left] != s[right])
            return 0;

        left++;
        right--;
    }

    return 1;
}

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

    fprintf(ofile, "%s\n", is_palindrom(s) ? "YES" : "NO");

    fclose(ofile);
}
