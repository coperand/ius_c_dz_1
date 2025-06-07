#include <stdio.h>
#include <string.h>

void build_palindrome(char s[], char result[])
{
    int count[26] = {0};
    int len = strlen(s);
    
    for (int i = 0; i < len; i++)
        count[s[i] - 'a']++;
    
    int left = 0, right = 1000;
    char middle_char = '\0';
    
    for(int i = 0; i < 26; i++)
    {
        while(count[i] >= 2)
        {
            result[left++] = 'a' + i;
            result[right--] = 'a' + i;
            count[i] -= 2;
        }
        if (count[i] == 1 && middle_char == '\0')
            middle_char = 'a' + i;
    }
    
    if (middle_char != '\0')
        result[left++] = middle_char;
    
    for(int i = 0; i < (1000 - right); i++)
        result[left + i] = result[right + 1 + i];
    
    result[left + (1000 - right)] = '\0';
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

    char result[1001];
    memset(result, 0, sizeof(result));
    build_palindrome(s, result);

    FILE *ofile = fopen("output.txt", "w");
    if(!ofile)
        return -1;

    fprintf(ofile, "%s\n", result);

    fclose(ofile);
}
