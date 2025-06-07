#include <stdio.h>
#include <string.h>

void soundex(char *word, char *code)
{
    if(word[0] == '\0')
    {
        strcpy(code, "0000");
        return;
    }

    code[0] = word[0];
    int code_pos = 1;
    char prev_code = '0';

    for(int i = 1; word[i] != '\0' && code_pos < 4; i++)
    {
        char current_code = '0';
        switch(word[i])
        {
            case 'b':
            case 'f':
            case 'p':
            case 'v':
                current_code = '1';
                break;
            case 'c':
            case 'g':
            case 'j':
            case 'k':
            case 'q':
            case 's':
            case 'x':
            case 'z':
                current_code = '2';
                break;
            case 'd':
            case 't':
                current_code = '3';
                break;
            case 'l':
                current_code = '4';
                break;
            case 'm':
            case 'n':
                current_code = '5';
                break;
            case 'r':
                current_code = '6';
                break;
        }
        
        if(current_code != '0' && current_code != prev_code)
        {
            code[code_pos++] = current_code;
            prev_code = current_code;
        }
    }

    while(code_pos < 4)
        code[code_pos++] = '0';
    code[4] = '\0';
}

int main()
{
    FILE *ifile = fopen("input.txt", "r");
    if(!ifile)
        return -1;

    char s[21];
    memset(s, 0, sizeof(s));
    fscanf(ifile, "%20s", s);

    fclose(ifile);

    char soundex_code[5];
    soundex(s, soundex_code);

    FILE *ofile = fopen("output.txt", "w");
    if(!ofile)
        return -1;

    fprintf(ofile, "%s\n", soundex_code);

    fclose(ofile);
}
