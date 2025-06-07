#include <stdio.h>
#include <string.h>

int is_palindrome(char s[])
{
    int count[26] = {0};
    
    for(int i = 0; s[i] != '\0'; i++)
    {
        if((s[i] < 'a' || s[i] > 'z') && (s[i] < 'A' || s[i] > 'Z'))
            continue;

        char c = (s[i] >= 'A' && s[i] <= 'Z') ? s[i] - ('A' - 'a') : s[i];
        count[c - 'a']++;
    }

    int odd_count = 0;
    for(int i = 0; i < 26; i++)
        if(count[i] % 2 != 0)
            odd_count++;

    return odd_count <= 1;
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

    printf("%s\n", is_palindrome(s) ? "YES" : "NO");
}
