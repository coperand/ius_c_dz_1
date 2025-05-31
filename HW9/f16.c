#include <stdio.h>

int main()
{
    char coord[3] = {0, 0, 0};
    scanf("%2s", coord);
    
    int letter = coord[0] - 'A' + 1;
    int number = coord[1] - '0';
    
    printf("%s\n", (letter + number) % 2 == 0 ? "BLACK" : "WHITE");
}
